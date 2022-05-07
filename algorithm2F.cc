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
    int n; cin >> n;
    vector<pair<int,int>> p(n) ;
    rep(i,n){
        cin >> p[i].first>> p[i].second; p[i].first--;
    }
    sort(p.begin(),p.end());
    int ans=0;
    for(int i=1;i<(n+1);i++){
        rep(j,p.size()){
            int plus=0;
            if(p[j].second<=i){
                ans+=p[j].first;
                p.erase(p.begin()+j);
                break;
            }
        }
        cout << -ans << endl;
    }
    return 0;
}