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
    int n;
    cin >> n;
    string s;
    map<string,int> mp;
    rep(i,n){
      cin >> s;
      if(mp.find(s) == mp.end()) mp.emplace(s,1);
      else mp[s]++;
    }
    int ans=0;
    string res;
    for(auto itr=mp.begin();itr != mp.end();itr++){
      if(ans < itr->second) {
        ans = itr -> second;
        res = itr -> first;
      }
    }
    cout << res<< endl;
    return 0;
}

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using P = pair<int, int>;

template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}

int main() {
  int num;
  cin >> num;
  map<string, int> m;

  rep(i, num) {
    string s;
    cin >> s;
    if (m.count(s) > 0) {
      m[s] += 1;
    } else {
      m[s] = 1;
    }
  }

  int result = 0;
  string name;
  for (pair<string, int> p : m) {
    if (p.second > result) {
      name = p.first;
      result = p.second;
    }
  }
  cout << name << endl;
  return 0;
}
