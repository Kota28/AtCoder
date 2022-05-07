#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main(){
  int n; cin >> n;
  string s;
  map<string,int> mp;
  rep(i,n){
    cin >> s;
    mp[s]++;
  }
  int mx=0;
  for(auto p:mp) mx=max(mx,p.second);
  for(auto p:mp){
    if(mx!=p.second) continue;
    cout << p.first << endl;
  }
  return 0;
}