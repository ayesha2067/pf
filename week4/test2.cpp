#include<iostream>
using namespace std;
int main(){
    int salary_per_month=10000;
    int price_of_laptop=50000;
    int advance=salary_per_month*(6*50/100);
    if(advance>=price_of_laptop){
        cout<<"you can buy laptop";
    }
    else{
        int months_required=price_of_laptop/(salary_per_month*0.5);
        cout<<"months required to buy laptop= "<<months_required<<endl;

    }
    
}
