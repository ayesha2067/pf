#include <iostream>
using namespace std;
int main(){
    int amount1,amount2,amount3;
    float discount;
    cout<<"red roses: ";
    cin>>amount1;
    cout<<"white roses : ";
    cin>>amount2;
    cout<<"tulips : ";
    cin>>amount3;
    float price1=2.00*amount1;
    float price2=4.10*amount2;
    float price3=2.50*amount3;
    float total_price=price1+price2+price3;
    if(total_price>200){
       discount=total_price*20/100;}
        float total_payable_amount=total_price-discount;
    
    cout<<"original price : "<<total_price<<endl;
    cout<<"total payable price after discount : "<< total_payable_amount;
}