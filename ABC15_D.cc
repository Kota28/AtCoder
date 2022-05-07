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
    ll w,n,k;
    vector<ll> a(n),b(n);
    cin >> w;
    cin >> n >> k;
    rep(i,n){
        cin >> a[i] >> b[i];
    }
    ll dp[n+1][w+1][k+1];
    rep(i,n+1){
        rep(j,w+1){
            rep(l,k+1){
                dp[j][i][l]=0;
            }
        }
    }
    rep(i,n){
        rep(j,w+1){
            rep(l,k+1){
                if(l==k||j+a[i]>w) chmax(dp[i+1][j][l],dp[i][j][l]);
                else{
                    chmax(dp[i+1][j][l],dp[i][j][l]);
                    chmax(dp[i+1][j+a[i]][l+1],dp[i][j][l]+b[i]);
                }
            }
        }
    }
    cout << dp[n][w][k] << endl;
    return 0;
}