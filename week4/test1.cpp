#include<iostream>
using namespace std;
int main(){
    int bill,discount,dis1;
    cout<<"enter your bill:";
    cin>>bill;

    if(bill<=5000){
     discount=bill*5/100;
     dis1=bill-discount;

    }
    if(bill>5000){
     discount=bill*10/100;
     dis1=bill-discount;
    }
    cout<<"your discounted bill is"<<dis1;
}