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
    int n; cin >> n;
    double d1=0.0,d2=0.0,d3=0.0,di=0.0,d[n],x[n],y[n];
    rep(i,n) cin >> x[i];
    rep(i,n) cin >> y[i];
    rep(i,n){
        d1+=abs(x[i]-y[i]);
        d2+=pow(abs(x[i]-y[i]),2);
        d3+=pow(abs(x[i]-y[i]),3);
        d[i]=abs(x[i]-y[i]);
    }
    rep(i,n){
        di=max(di,abs(x[i]-y[i]));
    }
    printf("%.6f\n" "%.6f\n" "%.6f\n" "%.6f", d1, pow(d2,0.5), pow(d3,0.3333333333), di);
    return 0;
}