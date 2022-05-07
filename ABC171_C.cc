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
    ll n;
    cin >> n;
    ll ind = 0;
    rep(i,10000){
      if((((pow(26,i)-26)/25)<n) &&(((pow(26,i+1)-26)/25)>=n)){
        ind = i;
        break;
      }
    }
    ll pre = n-((pow(26,ind)-26)/25);
    string ans = "";
    vector<ll> p;
    for(int i=(ind-1);i>0;i--){
      ll x = pre/pow(26,i);
      p.push_back(x);
      pre -= pow(26,i)*x;
    }
    if(pre==0) p.push_back(pre);
    else p.push_back(pre-1);
    if(n==26){
      cout << 'z' << endl;
      return 0;
    }
    if(n%26==0){
      rep(i,ind-1){
        ans += 'z';
      }
      cout << ans << endl;
      return 0;
    }
    rep(i,p.size()){
      ans += ('a'+p[i]);
    }
    cout << ans << endl;
    return 0;
}