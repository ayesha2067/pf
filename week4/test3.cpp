#include<iostream>
using namespace std;
int main(){
  

cout<<"welcome to the calculator"<<endl;
int num1;
cout<<"enter number 1 = ";
cin>>num1;
char op;
cout<<"enter operator = ";
cin>>op;
int num2;
cout<<"enter number 2 = ";
cin>>num2;
char addition='+';
char subtraction='-';
char division='/';
char multiplication='*';
if(op=='+'){
    cout<<num1<<"-"<<num2<<"="<<num1-num2;
}
if(op=='-'){
    cout<<num1<<"+"<<num2<<"="<<num1+num2;
}
if(op=='*'){
    cout<<num1<<"/"<<num2<<"="<<num1/num2;
}
if(op=='/'){
    cout<<num1<<"*"<<num2<<"="<<num1*num2;
}

}