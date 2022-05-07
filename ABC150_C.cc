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
    int n;
    cin >>n;
    vector<int> x(n),p(n),q(n);
    rep(i,n) cin >> p[i];
    rep(i,n) cin >> q[i];
    rep(i,n) x[i]=i+1;
    
    map<vector<int>,int> mp;
    do{
        mp[x]=mp.size();
    }
    while(next_permutation(x.begin(),x.end()));
    cout << abs(mp[p]-mp[q])<< endl;
    return 0;
}