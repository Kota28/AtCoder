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

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

ll gcd(ll a , ll b){
	if(b == 0) return a;
	return gcd(b , a % b);	
}
ll lcm(ll a , ll b){
	ll g = gcd(a , b);
	ll lc = (a/g) * b;
	return lc;
}

int k(int n){
    if(n%10==0) return n;
    else{
        int x=n/10;
        return 10*(x+1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    int n[5];
    vector<int> am;
    rep(i,5){
        cin >> n[i];
        if(n[i]%10!=0){
            am.push_back(n[i]%10);
        }
    }
    int x=10;
    rep(i,am.size()){
        x=min(x,am[i]);
    }
    int a=n[0];
    int b=n[1];
    int c=n[2];
    int d=n[3];
    int e=n[4];
    if(x==a%10){
        cout << a+k(b)+k(c)+k(d)+k(e) << endl;
    } else if(x==b%10){
        cout << k(a)+b+k(c)+k(d)+k(e) << endl;
    } else if(x==c%10){
        cout << k(a)+k(b)+c+k(d)+k(e) << endl;
    } else if(x==d%10){
        cout << k(a)+k(b)+k(c)+d+k(e) << endl;
    } else{
        cout << k(a)+k(b)+k(c)+k(d)+e << endl;
    }
    return 0;
}