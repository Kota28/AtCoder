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
    cin >> n;
    string fiz_str=" ";
    for(int i=1;i<=n;i++){
        if(i%2==0) cout << 'a';
        if(i%3==0) cout <<'b';
        if(i%4==0) cout <<'c';
        if(i%5==0) cout <<'d';
        if(i%6==0) cout <<'e';
        else cout << i;
        cout << endl;
    }
    return 0;
}