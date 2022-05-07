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

using P=pair<int,int>;

int H,W;
vector<vector<char>> maze;
vector<vector<bool>> seen;
P s,g;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void dfs(P p){
    seen[p.first][p.second]=true;
    rep(i,4){
        int ny=p.first+dy[i];
        int nx=p.second+dx[i];
        if(ny<0||H<=ny||nx<0||W<=nx) continue;
        if(maze[ny][nx]=='#') continue;
        if(seen[ny][nx]) continue;
        dfs(make_pair(ny,nx));
    }
}

int main(){
    cin >> H >> W;
    maze.assign(H,vector<char>(W,'-'));
    rep(i,H){
        rep(j,W){
            cin >> maze[i][j];
            if(maze[i][j]=='s'){
                s=make_pair(i,j);
            } else if(maze[i][j]=='g'){
                g=make_pair(i,j);
            }
        }
    }
    seen.assign(H,vector<bool>(W,false));
    dfs(s);
    if(seen[g.first][g.second]){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    return 0;
}
