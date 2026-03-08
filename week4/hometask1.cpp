#include<iostream>
using namespace std;
int main(){
    string name,ireland;
    cout<<"enter country name: ";
    cin>>name;
    float price;
    cout<<"ticket price in $: ";
    cin>>price;
    if(name==ireland){
      int discount= price*10/100;
        int final_price=price-discount;
        cout<<"final price of ticket after discount= "<<final_price;
    }
    else{
       int discount=price*5/100;
    int final_price=price-discount;
     cout<<"final price of ticket after discount= "<<final_price;
    }    }

    