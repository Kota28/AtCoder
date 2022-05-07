#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  vector <tuple<string,int,int>> score(N);
 for(int i=0; i<N; i++){
    string s; //shi no namae
    int a; //tokuten
    cin >> s >> a;
    score.at(i) = make_tuple(s,-a,i+1); //ookiijun nanode "a" ni "-" wo tsukeru
  }
  sort(score.begin(),score.end());
  for(int i=0; i<N; i++){
    string s;
    int a,b;
    tie(s,a,b) = score.at(i);
    cout << b << endl;
  }
}
