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
    int n;
    cin >> n;
    vector<int> p(n),q(n),x(n);
    rep(i,n){
        cin >> p[i];
    }
    rep(i,n){
        cin >> q[i];
    }
    rep(i,n){
        x[i]=i+1;
    }
    map<vector<int>,int> mp;
    do{
        mp[x]=mp.size();
    } while(next_permutation(x.begin(),x.end()));
    cout << abs(mp[p]-mp[q]);
    return 0;
}