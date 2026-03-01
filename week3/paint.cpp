#include<iostream>
using namespace std;
main(){
int a;
cout<<"enter paint area:";
cin>>a;
int w;
cout<<"enter width:";
cin>>w;
int h;
cout<<"enter height:";
cin>>h;
int pw;
pw=a/(w*h);
cout<<"walls painted= "<<pw;
}