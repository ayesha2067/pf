#include<iostream>
using namespace std;
main(){
    int number;
    int sum=0;
    while(number>=0){
        cout<<"enter a number or negative number to exit : ";
        cin>>number;
       sum+=number;

    
    }

    cout<<sum<<" sum of all numbers is : "<<endl;
    
}