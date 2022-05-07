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
	ll n; cin >> n;
	string s; cin >> s;
	ll r=0,g=0,b=0;
	rep(i,n){
		if(s[i]=='R') r++;
		else if(s[i]=='G') g++;
		else b++;
	}
	ll ans=r*g*b;
	for(int i=0;i<n;i++){
		for(int j=0;(j+2*i)<n;j++){
			if((s[j]!=s[i+j])&&(s[j+2*i]!=s[i+j])&&(s[j]!=s[j+2*i])){
				ans--;
			}
		}
	}
	cout << ans << endl;
    return 0;
}