#include<bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);i++)
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
    ll n,q;
    ll a[100010];
    ll b[100010];
    ll c[100010];
    pair<ll,ll> p[100010];
    rep(i,100010){
      p[i].first = i;
    }
    cin >> n;
    rep(i,n){
      cin >> a[i];
      p[a[i]].second++;
    }
    cin >> q;
    rep(i,q){
      cin >> b[i] >> c[i];
    }
    ll sum = 0;
    rep(i,n){
      sum += a[i];
    }
    rep(i,q){
      sum += (c[i]-b[i])*p[b[i]].second;
      p[c[i]].second += p[b[i]].second;
      p[b[i]].second = 0; 
      cout << sum << endl;
    }
    return 0;
}