#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int N;
    int table[101];
    vector<int> aftersort;
    int A=0;
    int B=0;

    cin >> N;
    for(int i=1; i<=N;i++){
        cin >> table[i];
        aftersort.push_back(table[i]);
    }
    sort(aftersort.begin(),aftersort.end(),greater<int>());

    for(int i=0;i<=N;i++){
        if(i%2==0){
            A+=aftersort[i];
        }
        if(i%2==1){
            B+=aftersort[i];
        }
    }
    cout << A-B << endl;
}