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

template<class T>
auto comp_idx(T* ptr){
  return [ptr](int l_idx, int r_idx){
    return ptr[l_idx] < ptr[r_idx];
  };
}

int main(){
    ios::sync_with_stdio(false);
    int n,m,x; cin >> n >> m >> x;
    int a[15][15];
    int c[15];
    rep(i,n){
        cin >> c[i];
        rep(j,m){
            cin >> a[i][j];
        }
    }
    pair<int,int> p[15];
    rep(i,n){
        p[i].first=c[i];
        p[i].second=i;
    }
    sort(p,p+n);
    int sum[15]={};
    int ans=0;
    rep(i,n){
        int idx=0;
        rep(j,m){
            if(sum[j]<x) idx++;
        }
        if(idx>0){
            ans+=p[i].first;
            rep(j,m){
                sum[j]+=a[p[i].second][j];
            } 
        } else break;
    }
    rep(j,m){
        cout << sum[j] << endl;
    }
    cout << ans << endl;
    return 0;
}