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
    int n,m,j;
    cin >> n >> m;
    vector<int> a(n);
    vector<vector<int>> p;
    int count=0;

    rep(i,n){
        cin >> a[i];
    }
    rep(i,n){
        rep(j,m/a[i]){
            p[i][j]=a[i]*(j+0.5);
        }
    }
    rep(k,n){
        for(int l=k+1;l<n;l++){
            rep(o,m/a[k]){
                rep(q,m/a[l]){
                    if(p[k][o]==p[l][q]){
                        ++count;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}