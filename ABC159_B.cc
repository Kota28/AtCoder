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

int check(string t){
    int a=t.size();
    int b=0;
    if(a%2!=0){
        rep(i,(a-1)/2){
            if(t[i]==t[a-1-i]) b++;
        }
        if(b!=((a-1)/2)) return false;
        else return true;  
    } else{
        rep(i,a/2){
            if(t[i]==t[a-1-i]) b++;
        }
        if(b!=a/2) return false;
        else return true;
    }
}

int main(){
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int n=s.size();
    string l=s.substr(0,(n-1)/2);
    string r=s.substr(((n-1)/2)+1,(n-1)/2);
    if(check(s)&&check(l)&&check(r)) cout << "Yes";
    else cout << "No";
    return 0;
}