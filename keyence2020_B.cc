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

ll gcd(ll a , ll b){
	if(b == 0) return a;
	return gcd(b , a % b);	
}
ll lcm(ll a , ll b){
	ll g = gcd(a , b);
	ll lc = (a/g) * b;
	return lc;
}

int MAX_N=100000;

int main(){
    ios::sync_with_stdio(false);
    int n;
    int x[MAX_N],l[MAX_N];
    cin >> n;
    rep(i,n){
        cin >> x[i] >> l[i];
    }
    P time[MAX_N];
    rep(i,n){
        time[i].first=x[i]+l[i];
        time[i].second=x[i]-l[i];
    }
    sort(time,time+n);
    int ans=0,t=-1000000000;
    rep(i,n){
        if(t<=time[i].second){
            t=time[i].first;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}