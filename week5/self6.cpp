#include<iostream>
using namespace std;
main(){
    int n;
    cin >>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    
    }
    cout<<"factorial of" <<n<< "is" <<factorial;
}