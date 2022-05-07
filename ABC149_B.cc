#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
typedef long double ld;
const double pi=acos(-1.0);
const ll mod=pow(10,9)+7;
const ll INF=pow(2,31)-1;
using str=string;
typedef pair<int,int> P;
typedef vector<int> vi;

ll gcd(ll x,ll y){
    ll r;
    while((r=x%y) !=0){
        x=y;
        y=r;
    }
    return y;
}

ll lcm(ll x, ll y){
    x /= gcd(x,y);
    y /=gcd(x,y);
    return (x*y);
}

int main(){
    ll a,b,k;
    cin >> a >> b >> k;
    if((a+b)<=k){
        cout << "0 0" << endl;
    }
    else{
        if(a>=k){
            a-=k;
            cout << a << " " << b << endl;
        }
        else{
            k-=a;
            if(k>=b){
                cout << "0 0" << endl;
            }
            else{
                b-=k;
                cout << "0 " << b << endl;
            }
        }
    }
    return 0;
}