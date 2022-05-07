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
    string s;
    cin >> s;
    vector<int> v(4);
    for(int i=0;i<4;i++){
        v[i]=s[i]-'0';
    }
    for(int j=0;j<(1<<3);j++){
        int tmp=v[0];
        for(int k=0;k<3;k++){
            if(j&(1<<k)) tmp-=v[k+1];
            else tmp+=v[k+1];
            if(tmp==7){
            for(int k=0;k<3;k++){
                if(j&(1<<k)) cout << '-';
                else cout << '+';
                cout << v[k+1];
            }
            cout << "=7" << endl;
            return 0;
        }
    }
    return 0;
}
}