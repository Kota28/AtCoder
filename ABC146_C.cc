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

const ll MAX_N=1e18;

int count(ll n){
    int c=1;
    while(n/10!=0){
        c++;
        n/=10;
    }
    return c;
}

int d(int n){
    int keta;
    while(n){
        n/=10;
        keta++;
    }
    return keta;
}

int main(){
   ll a,b;
   ll x;
   cin >> a >> b >> x;
   auto ket=[&](ll c){
       int res=0;
       while(c){
           c/=10;
           res++;
       }
       return res;
   };
   auto f=[&](ll c){
       return a*c+b*ket(c);
   };
   ll l=0,r=1000000001;
   while(r-l>1){
       ll c=(l+r)/2;
       if(f(c)<=x) l=c; else r=c;
   }
   cout << l  << endl;
   return 0;
}