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
    int n; cin >> n;
    char s[n][2*n-1];
    char t[n][2*n-1];
    rep(i,n){
        rep(j,2*n-1){
            cin >> s[i][j];
        }
    }
    rep(j,2*n-1){
        t[n-1][j]=s[n-1][j];
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<(2*n-1);j++){
            if(s[i][j]=='.'){
                t[i][j]='.';
            } else if(s[i][j]=='X'||((s[i][j]=='#')&&(t[i+1][j-1]=='X'||t[i+1][j]=='X'||t[i+1][j+1]=='X'))){
                t[i][j]='X';
            } else{
                t[i][j]='#';
            }
        }
    }
    rep(i,n){
        rep(j,2*n-1){
            cout << t[i][j];
        }
        cout << endl;
    }
    return 0;
}