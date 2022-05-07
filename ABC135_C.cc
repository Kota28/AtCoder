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

int MAX_N=100000;

int main(){
    ll n;
    ll a[MAX_N+5];
    ll b[MAX_N];
    cin >> n;
    rep(i,n+1){
        cin >>a[i];
    }
    rep(i,n){
        cin >> b[i];
    }
    ll ans=0;
    rep(i,n){
        if (a[i]>=b[i]){
            ans+=b[i];
        } else if(a[i+1]>=b[i]-a[i]){
            ans+=b[i];
            a[i+1]-=b[i]-a[i];
        } else{
            ans+=a[i]+a[i+1];
            a[i+1]=0;
        }
    }
    cout << ans << endl;
    return 0;
}