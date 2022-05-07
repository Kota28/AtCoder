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
    ios::sync_with_stdio(false);
    int a[3][3],b[10],n;
    rep(i,3){
        rep(j,3){
            cin >> a[i][j];
        }
    }
    cin >> n;
    rep(i,n){
        cin >> b[i];
    }
    bool c[3][3];
    rep(i,3){
        rep(j,3){
            c[i][j]=false;
            rep(k,n){
                if(a[i][j]==b[k]) c[i][j]=true;
            }
        }
    }
    str ans="No";
    rep(i,3){
        if(c[i][0]&&c[i][1]&&c[i][2]) ans="Yes";
    }
    rep(i,3){
        if(c[0][i]&&c[1][i]&&c[2][i]) ans="Yes";
    }
    if(c[0][0]&&c[1][1]&&c[2][2]) ans="Yes";
    if(c[0][2]&&c[1][1]&&c[2][0]) ans="Yes";
    cout << ans << endl;
    return 0;
}