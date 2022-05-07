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

int MAX_N=200000;

int main(){
    ios::sync_with_stdio(false);
    int n,k;
    int a[MAX_N];
    cin >> n >> k;
    rep(i,n){
        cin >> a[i];
    }
    P x[MAX_N];
    rep(i,n){
        x[a[i]].first++;
        x[i].second=i;
    }
    sort(x,x+n);
    int pre=0;
    rep(i,n){
        if(x[i].first>=1){
            pre++;
        }
    }
    int ans=0;
    rep(i,n){
        cout << a[i] << endl;
    }
    rep(i,n){
        cout << x[i].first << " " << x[i].second << endl;
    }
    if(pre<=k) cout << 0 << endl;
    else{
        for(int i=0;i++;i<(pre-k)){
            ans+=x[i].first;
        }
        cout << ans << endl;
    }
    return 0;
}