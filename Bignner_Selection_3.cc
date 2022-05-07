#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int a=0;
    cin >> s;
    if(s[0]=='1'){
        ++a;
    };
    if(s[1]=='1'){
        ++a;
    };
    if(s[2]=='1'){
        ++a;
    };
    cout << a << endl;
}