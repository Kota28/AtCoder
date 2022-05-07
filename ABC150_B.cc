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

int main(){
    ll n,cnt=0;
    str s;
    cin >> n >> s;
    rep(i,n-2){
        if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='C'){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}