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
    int n,k,a[MAX_N+5];
    cin >> n >> k;
    rep(i,n){
        cin >> a[i];
    }
    int b[MAX_N+5]={};
    set<int> s;
    rep(i,n){
        b[a[i]-1]++;
        s.insert(a[i]-1);
    }
    pair<int,int> p[MAX_N+5];
    rep(i,n){
        int x,y;
        x=i;
        y=b[i];
        p[i]=make_pair(y,x);
    }
    sort(p,p+n);
    if(s.size()<=k) cout << 0 << endl;
    else{
        int sum=0,i=0;
        while(s.size()>k){
            if(s.count(p[i].second)){
                sum+=p[i].first;
                s.erase(p[i].second);
            }
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}