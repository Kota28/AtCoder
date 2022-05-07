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
    ll n,m;
    cin >> n >> m;
    ll l[m],r[m];
    rep(i,m) cin >> l[i]>>r[i];
    ll ml=l[0],mr=r[0];
    rep(i,m){
        ml=max(ml,l[i]);
        mr=min(mr,r[i]);
    }
    if(mr<ml) cout << 0 << endl;
    else cout << mr-ml+1 << endl;
    return 0;
}