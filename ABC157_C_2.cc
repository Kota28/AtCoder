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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll gcd(ll a , ll b){
	if(b == 0) return a;
	return gcd(b , a % b);	
}
ll lcm(ll a , ll b){
	ll g = gcd(a , b);
	ll lc = (a/g) * b;
	return lc;
}

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    vector<P> p(m);
    rep(i,m){
        cin >> p[i].first >> p[i].second;
    }
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
    cout << -1 <<endl;
    return 0;
}