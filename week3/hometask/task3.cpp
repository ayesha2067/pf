#include<iostream>
using namespace std;
main(){
int v;
cout<<"enter initial velocity (m/s):";
cin>>v;
int a;
cout<<"enter acceleration (m/s^2):";
cin>>a;
int t;
cout<<"enter time(s):";
cin>>t;
int f;
f=v+a*t;
cout<<"final velocity(m/s):"<<f;
}


