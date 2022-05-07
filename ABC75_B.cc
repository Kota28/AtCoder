#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll=long long;
#define rep(i, n) for(int i = 0; i < n; i++)
using P=pair<int,int>;

int main() {
    int h,w;
    cin>>h>>w;
    string board[50];
    for (int i=0; i<h; i++) {cin>>board[i];}

        const int dx[8] = {1, 0,-1, 0, 1, -1,-1, 1};
        const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

        for(int i=0; i<h; i++){
            for(int j =0; j<w; j++){
                if(board[i][j]=='#')continue;

                int num =0;
                for (int d =0; d<8; d++){
                    const int ni =i+ dy[d];
                    const int nj = j+ dx[d];

                    if (ni<0 or h<=ni) continue;
                    if (ni<0 or w<=nj) continue;
                    if (board[ni][nj]=='#') num++;

                }

                board[i][j] = char(num +'0'); 
            }
        }

        for(int i =0; i<h; i++ ) cout << board[i] << endl;

}
