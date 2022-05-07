#include<bits/stdc++.h>
using namespace std;

int n,m;
int WA[105000];
bool AC[105000];

int main(){
    cin >> n >> m;
    int ac = 0;
    int wa = 0;
    for(int i = 1;i <=n; i++){
        WA[i] = 0;
        AC[i] = false;
    }
    while(m--){
        int p;
        string s;
        cin >> p >> s;
        if(AC[p]) continue;
        if(s == "AC"){
            AC[p] = true;
            ac++;
            wa += WA[p];
        } else if(s == "WA"){
            WA[p]++;

        }
    }
    cout << ac << " " << wa << endl;
}

