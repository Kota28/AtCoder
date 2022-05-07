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

int main(){
    ios::sync_with_stdio(false);
    int n,k; cin >> n >> k;
    if(n<k){
        double pre=0;
        for(int i=1;i<=n;i++){
            pre+=pow(0.5,ceil(log2(k/i)));
        }
        printf("%.12f\n", pre/n);
        return 0;
    }
    else{
        double pre2=0;
        for(int i=1;i<=k-1;i++) pre2+=pow(0.5,ceil(log2(k/i)));
        pre2+=n-k+1;
        printf("%.12f\n", pre2/n);
        return 0;
    }
}