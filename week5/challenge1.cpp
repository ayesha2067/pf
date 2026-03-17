#include<iostream>
using namespace std;
main(){
    for(int rows=1;rows<=10;rows++){
        for(int cols=1;cols<=rows;cols++){
            cout<<"*";
        }
        cout<<endl;
    }
for(int rows=10;rows>=1;rows--){
    for(int cols=1;cols<=rows;cols++){
        cout<<"*";
    }
    cout<<endl;}}