#include<iostream>
#include<math.h>
using namespace std;

int out(int i){
    for(int j=0;j<7;j++){
        if((pow(10,j)<=i)&(i<pow(10,j+1)-1)){
            return i/(pow(10,j));
        }
    }
}

int main(){
    int N,i,j;
    int res=0;
    cin >>N;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if((out(i)==(j%10))&(out(j)==(i%10))){
                ++res;
            }
        }
    }
    cout << res << endl;
}