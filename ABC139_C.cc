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
    int n; cin >> n;
    int h[n],d[n-1];
    rep(i,n) cin >> h[i];
    rep(i,n-1) d[i]=h[i]-h[i+1];
    int m;
    int ans=0;
    rep(i,n-1){
        if(d[i]>=0) m++;
        else m=0;
        ans=max(ans,m);
    }
    rep(i,n-1) cout << d[i]<<endl;
    cout << ans << endl;
    return 0;
}