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
    int time=0;
    P p[200005];
    rep(i,n){
        cin >> p[i].second >> p[i].first;
    }
    sort(p,p+n);
    int ind=0;
    rep(i,n){
        time+=p[i].second;
        if(time>p[i].first){
            break;
        }
        ind++;
    }
    if(ind==n) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}