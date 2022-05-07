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
    map<char,int> mp={
        {'a',0},
        {'b',0},
        {'c',0},
    };
    string s; cin >> s;
    rep(i,s.size()){
        mp[s[i]]++;
    }
    int vote=0;
    char candidate[3]={'a','b','c'};
    rep(i,3){
        vote=max(vote,mp.at(candidate[i]));
    }
    char ans;
    rep(i,3){
        if(vote==mp.at(candidate[i])){
            ans=candidate[i];
            break;
        }
    }
    cout << ans << endl;
    return 0;
}