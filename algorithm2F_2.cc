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
    vector<pair<int,int>> P(n);
    rep(i,n){
        int a,b; cin >> a >> b;
        P[i]=make_pair(a,b);
    }
    sort(P.begin(),P.end());
    priority_queue<int> q;
    int ans=0,i=0;
    rep(k,n){
        for(;i<n;i++){
            pair<int,int> p=P[i];
            if(p.first>k) break;
            q.push(p.second);
        }
        ans+=q.top();q.pop();
        cout << ans << endl;
    }
    return 0;
}