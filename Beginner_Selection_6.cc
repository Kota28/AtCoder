#include<iostream>
using namespace std;


int main(){
    int N,A,B;
    int res=0;
    int myf(int);

    cin >> N >> A >> B;
    for(int i=1;i<=N;i++){
        if((A<=myf(i))&&(myf(i)<=B)){
            res+=i;
        }
    }
    cout << res << endl;
}

int myf(int j){
    int r=0;
    while(j>0){
        r+=j%10;
        j=j/10;
    }
    return r;
}

