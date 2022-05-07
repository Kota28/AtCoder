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

std::vector<int> find_all(const std::string str, const std::string subStr) {
    std::vector<int> result;
 
    int subStrSize = subStr.size();
    int pos = str.find(subStr);
 
    while (pos != std::string::npos) {
        result.push_back(pos);
        pos = str.find(subStr, pos + subStrSize);
    }
 
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    string s; cin >>s;
    int f=0;
    vi x=find_all(s,"hi");
    int y=s.find("hi");
    if(y==string::npos) cout << "No" << endl;
    else{ 
        for(const auto &pos:x){
            if(s[pos+2]=='i') f++;
        }
        if(f>0) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}