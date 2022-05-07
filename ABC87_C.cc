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

int MAX_N=100;

int main(){
    ios::sync_with_stdio(false);
    int n,a[2][MAX_N];
	cin >> n;
	rep(i,n){
		cin >> a[0][i];
	}
	rep(i,n){
		cin >> a[1][i];
	}

	int ans[MAX_N];
    for(int i=0;i++;i<n){
        int pre=0;
        pre+=a[0][i];
        for(int j=i;j++;j<n){
            pre+=a[1][j];
        }
        ans[i]=pre;
    }
    int b=0;
    rep(i,n){
        b=max(b,ans[i]);
    }
    cout << b << endl;
    return 0;
}