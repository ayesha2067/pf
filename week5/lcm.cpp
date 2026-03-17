#include<iostream>
using namespace std;
main(){
    int a;
    int b;
    cout<<"enter first number : ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    int num1=a;
    int num2=b;
    int gcd;
    while(b!=0){
        int g=b;
        b=a%b;
        a=g;
        }
         gcd=a;
        cout<< "GCD of " << num1  << " and " << num2 << " is " << a <<endl;
    
    int lcm;
    lcm=(num1*num2)/gcd;
    cout<<"LCM of " << num1  <<  " and "  <<  num2  << " is " <<lcm <<endl; 
}