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
    string s1,s2,s3,s4,s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    for(int j=1;j<=n;j++){
      if (s1[4*j-3] == s1[4*j-2] && s1[4*j-2] == s1[4*j-1] && s1[4*j-1] == '#'){
        if(s2[4*j-3] == s2[4*j-1] && s2[4*j-1] == '#'){
          if(s3[4*j-2] == '.'){
            cout << '0';
          } else if(s4[4*j-3] == '#'){
            cout << '8';
          } else cout << '9';
        } else if(s2[4*j-3] == '.' && s2[4*j-1] == '#'){
          if (s4[4*j-3] == '#') cout << '2';
          else if (s3[4*j-3] == '.') cout << '7';
          else cout << '3';
        } else{
          if(s4[4*j-3] == '.') cout << '5';
          else cout << '6';
        }
      } else{
        if(s1[4*j-2] == '#') cout << '1';
        else cout << '4';
      }
    }
    return 0;
}