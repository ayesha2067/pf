#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float num1,num2;
    cout<<"enter base number : ";
    cin>>num1;
    cout<< " enter the exponent : ";
    cin>>num2;
    cout<< " 5 raised to the power " << num2 << " is " <<pow(num1,num2);
}