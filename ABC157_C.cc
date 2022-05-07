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
    int n,m; cin >> n >> m;
    vector<P> p(m);
    rep(i,m) cin >> p[i].first >> p[i].second;
    rep(x,1000){
        int keta=1;
        int nx=x/10;
        vector<int> d(1,x%10);
        while(nx){
            keta++;
            d.push_back(nx%10);
            nx/=10;
        }
        if(keta!=n) continue;
        bool ok=true;
        reverse(d.begin(),d.end());
        rep(i,n){
            if(d[p[i].first-1]!=p[i].second) ok=false;
        }
        if(ok){
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}