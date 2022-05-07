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
    int n,k;
    double p[n];
    double q[n-k+1]={0};
    cin >> n >> k;
    rep(i,n){
        cin >> p[i];
    }
    rep(i,k){
        q[0]+=(p[i]+1)/2.0;
    }
    for(int i=1;i<n-k+1;i++){
        q[i]=q[i-1]-(p[i-1]+1)/2.0+(p[i-1+k]+1)/2.0;
    }
    double ans=0.0;
    rep(i,n-k+1){
        ans=max(ans,q[i]);
    }
    printf("%.10f", ans);
    return 0;
}

