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

int dp[1005][10005]={};

int main(){
    int h,n;
    cin >> h >> n;
    vector<int> a(n),b(n);
    rep(i,n){
        cin >> a[i] >> b[i];
    }
    rep(i,n){
        for(int j=0;j<=h;j++){
            if(j<a[i]){
                dp[i+1][j]=dp[i][j];
            } else{
            dp[i+1][j]=min(dp[i][j],dp[i+1][j-a[i]]+b[i]);
            }
        }
    }
    cout << dp[n][h] << endl;
    return 0;
}
