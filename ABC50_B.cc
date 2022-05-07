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
    int n,m,p[m],ans=0,t[n],x[m]; cin >> n;
    vector<int> a;
    rep(i,n){
        cin >> t[i];
        ans+=t[i];
    }
    cin >> m;
    rep(i,m){
        cin >> p[i] >> x[i];
        ans-=t[p[i]-1]-x[i];
        a.push_back(ans);
        ans+=t[p[i]-1]-x[i];
    }
    rep(i,m){
        cout << a[i] << endl;
    }
    return 0;
}