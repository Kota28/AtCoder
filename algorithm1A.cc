#include<bits/stdc++.h>
#include<cctype>
#define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
typedef long double ld;
const double pi=acos(-1.0);
const ll mod=pow(10,9)+7;
const ll INF=pow(2,31)-1;
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

bool check_int(std::string S){
    if(std::all_of(S.cbegin(),S.cend(),isdigit)){
        return true;
    }
    return false;
}

int main(){
    using std::string;
    string S;
    std::cin >> S;
    int T;
    if(check_int(S)){
        T=stoi(S);
        std::cout << 2*T << std::endl;
    } else{
        std::cout << "error" << std:: endl;
    }
    return 0;
}