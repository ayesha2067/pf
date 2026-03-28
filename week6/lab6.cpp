#include<iostream>
using namespace std;
main(){
    int sum=0;
    float average;
    int num[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        sum=sum+num[i];

    }
    average=sum/5;
    cout<<"sum : " << sum <<endl;
    cout<<"average : " << average <<endl;
}