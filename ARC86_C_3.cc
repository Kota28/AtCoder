#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <cstring>
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath>
#include <numeric>
#include <float.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef unsigned long long ll;

int main(){
int N,K; cin >> N >> K;
set<int> s;
vector<int> A(N);
vector<int> B(N,0);
rep(i,N) cin >> A[i];
rep(i,N) {
	B[A[i]-1]++;
	s.insert(A[i]-1);
}
vector<pair<int, int>> c(N);//配列の宣言
for(int i = 0; i < N ; i++){
  int a,b;
  a = i;
  b = B[i];
  c[i] = make_pair(b,a);//配列型のpairに代入
}
  sort(c.begin(),c.end());//pair.firstを小さい順にsort




if (s.size() <= K){
	cout << 0 << endl;
}
else {
	int sum = 0;
	int i = 0;
	while(s.size() != K){
		if(s.count(c[i].second)){
			sum += c[i].first;
			s.erase(c[i].second);
		}
		i++;
	}
	cout << sum << endl;
}
}
