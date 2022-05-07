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

const int MAX_N=2000000;

int main(){
    int n,j,k,l;
    cin >> n;
    vector<int> a(MAX_N),b(MAX_N);
    rep(i,n){
        cin >> a[i];
        b[a[i]]++;
    } 
    b.erase(b.begin()+0);
    rep(i,n){
        if(b[i]==0){
            j=i;
        } else if(b[i]==2){
            k=i;
        } else{
            l++;
        }
    }
    if(l!=n){
        cout << k+1 << " " << j+1 << endl;
    } else{
        cout << "Correct" << endl;
    }
}
