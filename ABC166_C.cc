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
int MAX_N=100000;
int MAX_M=100000;
int MAX_H=1000000000;
int main(){
    ios::sync_with_stdio(false);
    int n,m; cin >> n >> m;
    int x,y;
    set<int> s;
    int h[MAX_N],a[MAX_M+5],b[MAX_M+5],save[MAX_N+5]={},compare[MAX_N+5]={};
    rep(i,n){
        cin >> h[i];
    }
    rep(i,m){
        cin >> x >> y;
        if(h[x-1]>h[y-1]) s.insert(y);
        else if(h[x-1]<h[y-1]) s.insert(x);
        else if(h[x-1]==h[y-1]){
            s.insert(x);
            s.insert(y);
        }
    }

    cout << n-s.size() << endl;
    return 0;
}