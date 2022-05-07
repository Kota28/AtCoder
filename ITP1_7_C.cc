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

int main(){
    ios::sync_with_stdio(false);
    int r,c,s[r][c],is[r+1][c+1]; cin >> r >> c;
    rep(i,r+1) is[i][c]=0;
    rep(i,c+1) is[r][i]=0;
    
    rep(i,r){
        rep(j,c){
            cin >> s[i][j];
        }
    }
    rep(i,r){
        rep(j,c){
            is[i][j]=s[i][j];
        }
    }
    rep(i,r){
        rep(j,c){
           is[i][c]+=s[i][j];
           is[r][j]+=s[i][j];
        }
    }
    rep(i,r+1){
        is[r][c]+=is[i][c];
    }
    rep(i,r+1){
        rep(j,c+1){
            cout << is[i][j];
        }
    }
    return 0;
}