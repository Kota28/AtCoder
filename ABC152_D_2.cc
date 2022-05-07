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

ll gcd(ll x,ll y){
    ll r;
    while((r=x%y) !=0){
        x=y;
        y=r;
    }
    return y;
}

ll lcm(ll x, ll y){
    x /= gcd(x,y);
    y /=gcd(x,y);
    return (x*y);
}

P f(int x){
    int a=x%10;
    int b=0;
    while(x){
        b=x;
         x/=10;
    }
    return P(a,b);
}

int main(){
    int n;
    cin >> n;
    map<P,int> freq; //集計のため
    for(int i=1;i<=n;i++){
        P p=f(i);
        freq[p]++;
    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        P p=f(i);
        P q(p.second,p.first);
        ans +=freq[q];
    }
    cout << ans << endl;
    return 0;
}