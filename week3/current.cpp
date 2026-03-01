#include<iostream>
using namespace std;
main(){
cout<<"enter charge(q) in coloumbs:";
int charge;
cin>>charge;
cout<<"enter time(t) in seconds:";
int time;
cin>>time;
float current;
current=charge/time;
cout<<"current(I) is"<<current<<"amperes";
} 

