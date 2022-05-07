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

int MAX_M=100000;

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    int a[MAX_M],b[MAX_M];
    cin >> n >> m;
    rep(i,m){
        cin >> a[i] >> b[i];
    }
    P bridge[MAX_M];
    rep(i,m){
        bridge[i].first=b[i];
        bridge[i].second=a[i];
    }
    sort(bridge,bridge+m);
    int ans=0,now=0;
    rep(i,m){
        if(now<=bridge[i].second){
            now=bridge[i].first;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}