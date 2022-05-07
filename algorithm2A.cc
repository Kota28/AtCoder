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

int main(){
    ios::sync_with_stdio(false);
    string s,t; cin >> s >> t;
    map<string,int> dictionary{
        {"B1",8},
        {"B2",7},
        {"B3",6},
        {"B4",5},
        {"B5",4},
        {"B6",3},
        {"B7",2},
        {"B8",1},
        {"B9",0},
        {"1F",9},
        {"2F",10},
        {"3F",11},
        {"4F",12},
        {"5F",13},
        {"6F",14},
        {"7F",15},
        {"8F",16},
        {"9F",17},

    };
    cout << abs(dictionary[s]-dictionary[t]) << endl;
    return 0;
}