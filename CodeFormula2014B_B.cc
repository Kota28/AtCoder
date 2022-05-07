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
    string n;
    cin >> n;
    ll even=0,odd=0;
    int digit=0;
    rep(i,n.size()){
        int x=n[n.size()-1-i]-'0';
        if(digit%2==0) even+=x;
        else odd+=x;
        digit++;
    }
    cout << odd << " " << even;
    return 0;
}