#include<iostream>
using namespace std;
main(){
    int sum=0;
    int num=0;
    while(num>=0){
        sum=sum +num;
        cout<<"enter number : ";
        cin>>num;
    }
    cout<<"sum : " << sum <<endl;
}