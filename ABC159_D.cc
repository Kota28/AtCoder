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

uintmax_t combination(unsigned int n, unsigned int r) {
  if ( r * 2 > n ) r = n - r;
  uintmax_t dividend = 1;
  uintmax_t divisor  = 1;
  for ( unsigned int i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}

ll nc2(ll n)
{
    return n * (n - 1) / 2;
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    int a[n];
    ll ans=0;
    cin >> n;
    rep(i,n){
        cin >> a[i];
    }

    int m=a[0];
    rep(i,n){
        m=max(m,a[i]);
    }
    int b[m]={};

    rep(i,n){
        b[a[i]-1]++;
    }

    rep(i,n){
        ans=0;
        b[a[i]-1]--;
        rep(j,m){
            if(b[j]<2) ans=ans;
            else ans+=nc2(b[j]);
        }
        cout << ans << endl;
        b[a[i]-1]++;
    }
    return 0;
}