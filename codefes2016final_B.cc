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

int MAX_N=1e7;

int main(){
    ios::sync_with_stdio(false);
    int n,m; cin >> n;
    int sum=0;
    int a[MAX_N+5]={0};
    if(n==2) cout << 2 << endl;
    else{
        for(int i=1;i<(n);i++){
        a[i]=a[i-1]+i;
    }
    rep(i,n){
        if(a[i]<n&&n<=a[i+1]){
            m=i+1;
            break;
        }
    }
    for(int i=1;i<(m+1);i++){
        if(i!=a[m]-n){
            cout << i << endl;
        }
    }
    }
    return 0;
}