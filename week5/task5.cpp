#include<iostream>
using namespace std;
main(){
    int sum=0;
    int i;
    int digit;
    cout<<"enter number : " ;
    cin>>digit;
    while( digit!=0){
        sum+=digit%10;
        digit/=10;
    }
    cout<<"sum of digits : "<<sum<<endl;

    }


