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

const int MAX_N=8;
int x[MAX_N],y[MAX_N];

double dist(int i,int j){
    double dx=x[i]-x[j];
    double dy=y[i]-y[j];
    return pow(dx*dx+dy*dy,0.5);
}

int main(){
    int n;
    double sum=0.0;
    vector<int> v(n);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> x[i] >> y[i];
    }
    rep(i,n){
        v[i]=i+1;
    }    
    do {
        rep(i,n-1) sum+=dist(v[i],v[i+1]); 
    } while(next_permutation(v.begin(), v.end()));
    int factorial=1;
    for(int i=2;i<=n;i++) factorial *=i;
    printf("%.10\n", sum/factorial);
    return 0;
}