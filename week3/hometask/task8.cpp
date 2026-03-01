#include <iostream>
using namespace std;
main(){
float c;
c=1.94;
float p;
cout<<"enter vegetable price per kilogram(in coins):";
cin>>p;
float k;
cout<<"enter fruit price per kilogram(in coins):";
cin>>k;
int v;
cout<<"enter total kilograms of vegetables:";
cin>>v;
int f;
cout<<"enter total kilograms of fruits:";
cin>>f;
int e;
e=(p*v)+(k*f);
cout<<"total earnings in rupees(rps):"<<e;
}

