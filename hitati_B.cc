#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef long double ld;
const double pi=acos(-1.0);
const ll mod=pow(10,9)+7;
const ll INF=pow(2,31)-1;
using str=string;
typedef pair<int,int> P;
typedef vector<int> vi;

ll gcd(ll a,ll b){
    ll v0=a,v1=b,v2=a%b;
    while(v2!=0){
        v0=v1;
        v1=v2;
        v2=v0%v1;
    }
    return v1;
}

ll lcm(ll a,ll b){
    return (a*b/gcd(a,b));
}

int main(){
    ios::sync_with_stdio(false);
    int A,B,M,ans; cin >>A>>B>>M;
    int dis[A][B];
    vi a(A),b(B);
    rep(i,A) cin >>a[i];
    rep(i,B) cin >>b[i];
    int minA=*min_element(a.begin(),a.end());
    int minB=*min_element(b.begin(),b.end());
    int ans=minA+minB;
    rep(i,M){
        int x,y,c;
        cin >> x >> y >>c; x--; y--;
        ans=min(ans,a[x]+b[y]-c);
    }
    cout << ans << endl;
    return 0;
}