#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef long double ld;
const double pi=acos(-1.0);
const ll mod=pow(10,9)+7;
const ll INF=pow(2,31)-1;
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
    int k,n;
    cin >> k >> n;
    vector<int> a(n);
    rep(i,n){
        cin >> a[i];
    }
    int l=0;
    rep(i,n){
        if(i==n-1) l=max(l,k-a[i]+a[0]);
        else l=max(l,a[i+1]-a[i]);
    }
    cout << k-l << endl;
    return 0;
}