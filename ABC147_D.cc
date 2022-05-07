#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef long double ld;
const double pi=acos(-1.0);
const ll mod=pow(10,9)+7;
const ll INF=pow(2,31)-1;
using str=string;
typedef pair<int,int> P;
typedef vector<int> vi;

ll gcd(ll a,ll b){
    ll v0=a,v1=b,v2=a%b;
    while(v2!=0){
        v0=v1;
        v1=v2;
        v2=v0%v1;
    }
    return v1;
}

ll lcm(ll a,ll b){
    return (a*b/gcd(a,b));
}

const int MAX_N=300005;

int myXOR(int x,int y){
    int res=0;
    for(int i=31;i>=0;i--){
        bool b1=x&(1 << i);
        bool b2 =y&(1 << i);
        bool xoredBit=(b1&b2)?0:(b1|b2);
        res <<=1;
        res |=xoredBit;
    }
    return res;
}

int main(){
    int n;
    int a[MAX_N+1];
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ll ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ans+=myXOR(a[i],a[j]);
        }
    }
    cout << ans%mod << endl;
    return 0;
}