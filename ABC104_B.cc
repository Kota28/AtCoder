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
    string S; cin >> S;
    string ans="WA";
    int count=0,upper=0;
    if(S[0]=='A'){
        for(int i=2;i<=S.length()-2;i++){
            if(S[i]=='C') count++; 
        }
        if(count==1){
            rep(i,S.length()){
                if(('A'<=S[i])&&(S[i]<='Z')) upper++;
            }
            if(upper==2) ans="AC";
        }
    }
    cout << ans << endl;
    return 0;
}