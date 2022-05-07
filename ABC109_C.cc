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

ll MAX_N=100000;

int main(){
    ios::sync_with_stdio(false);
    ll n,X,x[MAX_N],ans;
    cin >> n >> X;
    rep(i,n){
        cin >> x[i];
    }
    ans=abs(X-x[0]);
    for(int i=1;i++;i<n){
        ans=gcd(ans,abs(X-x[i]));
    }
    rep(i,n){
        cout << x[i] << endl;
    }
    cout << abs(X-x[0]) << endl;
    cout << ans << endl;
    return 0;
}