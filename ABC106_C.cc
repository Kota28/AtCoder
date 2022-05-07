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
    string s; cin >> s;
    ll k; cin >> k;
    if(s.size()==1) cout << s[0] << endl;
    else{
        if(s[0]!='1') cout << s[0] << endl;
        else{
            int idx=0;
            rep(i,s.size()){
                if(s[i]=='1'){
                    idx++;
                    continue;
                }
                else break;
            }
            if(idx>=k) cout << 1 << endl;
            else cout << s[idx] << endl;
        }
    }
    return 0;
}