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
    int m,f,r;
    char grade;
    while(true){
        cin >> m >> f >> r;
        if(m==-1&&f==-1&&r==-1) break;
        if(m+f>=80) grade='A';
        if(m+f>=65&&m+f<80) grade='B';
        if((m+f>=50&&m+f<65)||(m+f>=30&&m+f<50&&r>=50)) grade='C';
        if(m+f>=30&&m+f<50&&r<50) grade='D';
        if(m+f<30||m==-1||f==-1) grade='F';
        printf("%c\n",grade);
    }
    return 0;
}