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
    string s;
    cin >> s;
    vector<ll> b;
    for(ll i=0;i<s.size();i++){
      if(s[i] == 'B') b.push_back(i);
    }
    ll initial=0;
    for(ll i=0;i<b.size();i++){
      initial += b[i];
    }
    ll last=0;
    for(ll i=s.size()-1;i>s.size()-1-b.size();i--){
      last += i;
    }
    cout << last-initial << endl;
    return 0;
}