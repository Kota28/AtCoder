#include <bits/stdc++.h>
#define rep(i, a, n) for (int i = a; i < n; i++)
#define repr(i, a, n) for (int i = n - 1; i >= a; i--)
using namespace std;
using ll = long long;
using P = pair<int, int>;
template <typename T> void chmin(T &a, T b) { a = min(a, b); }
template <typename T> void chmax(T &a, T b) { a = max(a, b); }

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v1(n + 2), v2(n + 2);
  rep(i, 1, n + 1) cin >> v1[i];

  rep(i, 1, n + 2) {
    v2[i] += v2[i - 1];
    v2[i] += abs(v1[i] - v1[i - 1]);
  }

  rep(i, 1, n + 1) {
    int x = v2[n + 1];
    x -= abs(v1[i] - v1[i - 1]);
    x -= abs(v1[i + 1] - v1[i]);
    cout << x + abs(v1[i - 1] - v1[i + 1]) << endl;
  }
}
