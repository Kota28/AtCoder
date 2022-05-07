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
int vector_finder(std::vector<int> vec, int number) {
  auto itr = std::find(vec.begin(), vec.end(), number);
  size_t index = std::distance( vec.begin(), itr );
  if (index != vec.size()) { // 発見できたとき
    return 1;
  }
  else { // 発見できなかったとき
    return 0;
  }
}

int main(){
    ios::sync_with_stdio(false);
    vector<int> p(105);
    int x,n;
    cin >> x >> n;
    rep(i,n){
      cin >> p[i];
    }
    int ans;
    int r=0;
    while(true){
      if(vector_finder(p,x-r)==0){
        cout << x-r << endl;
        return 0;
      } else if(vector_finder(p,x+r)==0){
        cout << x+r << endl;
        return 0;
      } else r++;
    }
    cout << ans << endl;
    return 0;
}