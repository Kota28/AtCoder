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
    int h,w;
    while(true){
        cin >> h >> w;
        if(h==w==0) break;
    }
    rep(i,w){
        rep(j,h){
            cout <<"#";
        }
    }
    return 0;
}
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
	int H,W;
	while(true){
		scanf("%d %d",&H,&W);
		if(H == 0 && W == 0) break;
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
				printf("#");
			}
			printf("\n");
		}
		printf("\n");
	}
}