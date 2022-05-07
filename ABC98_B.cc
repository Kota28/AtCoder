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
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans=0;
    rep(i,n){
        int cnt=0;
        for(char c='a';c<='z';c++){
            bool left=false,right=false;
            for(int j=0;j<i;j++){
                if(s[j]==c) left=true;
            }
            for(int j=i;j<n;j++){
                if(s[j]==c) right=true;
            }
            if(left&&right) cnt++;
        }
        if(ans<cnt) ans=cnt;
    }
    cout << ans;
    return 0;
}