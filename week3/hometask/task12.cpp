#include<iostream>
using namespace std;
main(){
int a;
cout<<"number of square meter you can paint:";
cin>>a;
int w;
cout<<" width of single wall(in meters):";
cin>>w;
int h;
cout<<" height of single wall(in meters):";
cin>>h;
int pw;
pw=a/(w*h);
cout<<" number of walls you can paint= "<<pw;
}