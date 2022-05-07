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
    deque<char> ans;
    string s; cin >> s;
    int q; cin >> q;
    for(char c:s) ans.push_back(c);
    bool flip=false;
    rep(i,q){
        int t;
        cin >> t;
        if(t==1){
            flip=!flip;
        } else{
            int f; char c;
            cin >> f >> c;
            if(!flip){
                if(f==1) ans.push_front(c);
                else ans.push_back(c);
            } else{
                if(f==1) ans.push_back(c);
                else ans.push_front(c);
            }
        }
    }
    if(flip) reverse(ans.begin(),ans.end());
    rep(i,ans.size()){
        cout << ans[i];
    }
    return 0;
}