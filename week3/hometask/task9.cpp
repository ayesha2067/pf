#include<iostream>
using namespace std;
main(){
int n;
cout<<"enter a 4_digit number:";
cin>>n;
int a=n%10;
n=n/10;
int b=n%10;
n=n/10;
int c=n%10;
n=n/10;
int d=n%10;
n=n/10;
int sum;
sum=a+b+c+d;
cout<<"sum of individual digits is="<<sum<<endl;
}