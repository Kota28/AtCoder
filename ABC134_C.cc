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

template<typename T>
void remove(std::vector<T>& vector, unsigned int index)
{
    vector.erase(vector.begin() + index);
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n),b(n),c(n);
    rep(i,n){
        cin >> a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end(),greater<int>());
    int m1=b[0];
    int m2=b[1];
    vector<int>::iterator M=max_element(a.begin(),a.end());
    size_t N=distance(a.begin(),M);
    rep(i,n){
        if(i==N){
            c[i]=m2;
        } else{
            c[i]=m1;
        }
    }
    rep(i,n){
        cout << c[i] << endl;
    }
    return 0;
}