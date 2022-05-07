#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef long double ld;
const double pi=acos(-1.0);
const ll mod=pow(10,9)+7;
const ll INF=pow(2,31)-1;
using str=string;
typedef pair<int,int> P;
typedef vector<int> vi;

ll gcd(ll a,ll b){
    ll v0=a,v1=b,v2=a%b;
    while(v2!=0){
        v0=v1;
        v1=v2;
        v2=v0%v1;
    }
    return v1;
}

ll lcm(ll a,ll b){
    return (a*b/gcd(a,b));
}

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int MAX_N = 110;
bool v[MAX_N][MAX_N];

int main() {
  int N, Q; cin >> N >> Q;
  for(int i = 0; i < Q; i++) {
    int n; cin >> n;
    if(n == 1) {
      int a, b; cin >> a >> b; a--, b--;
      v[a][b] = true;
    } else if(n == 2) {
      int a; cin >> a; a--;
      for(int j = 0; j < N; j++) {
        if(v[j][a]) v[a][j] = true;
      }
    } else if(n == 3) {
      int a; cin >> a; a--;
      vector<int> vec;
      for(int x = 0; x < N; x++) {
        if(v[a][x]) {
          for(int j = 0; j < N; j++) {
            if(v[x][j] && j != a) vec.push_back(j);
          }
        }
      }
      for(auto ve: vec) {
        if(ve != a) v[a][ve] = true;
      }
    }
  }

  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cout << (v[i][j] ? "Y" : "N");
    }
    cout << endl;
  }
  return 0;
}
