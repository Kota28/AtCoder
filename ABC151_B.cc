#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
typedef long long ll;
using str=string;
typedef pair<int,int> P;


int main(){
    int n,k,m,i;
    int a[110];
    cin >> n >> k >> m ;
    int tot=0;

    rep(i,n-1){
        cin >> a[i];
        tot+=a[i];
    }
    if((n*m-tot)<=0){
        cout << 0 << endl;
    }
    if((0<(n*m-tot))&((n*m-tot)<=k)){
        cout << n*m-tot << endl;
    }
    if((n*m-tot)>k){
        cout << -1 << endl;
    }
}