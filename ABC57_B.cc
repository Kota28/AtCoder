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

int MAX_N=50;
int MAX_M=50;

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    cin >> n >> m;
    int a[MAX_N],b[MAX_N],c[MAX_M],d[MAX_M];
    rep(i,n){
        cin >> a[i] >> b[i];
    }
    rep(j,m){
        cin >> c[j] >> d[j];
    }
    rep(i,n){
        int min_distance=abs(a[i]-c[0])+abs(b[i]-d[0]),checkpoint=1;
        for(int j=1;j++;j<m){
            int cur_distance=abs(a[i]-c[j])+abs(b[i]-d[j]);
            if(cur_distance<min_distance){
                min_distance=cur_distance;
                checkpoint=j+1;
            }
        }
        cout << checkpoint << endl;
    }
    return 0;
}