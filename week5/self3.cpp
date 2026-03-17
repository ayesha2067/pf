#include<iostream>
using namespace std;
main(){
    int number,sum=0;
    int count=0;
    
    while(count<5){
cout<<count+1<<"enter number";
cin>>number;
sum=sum+number;
count++;

    }
    cout<<"total sum = "<<sum<<endl;
    
}