#include<iostream>
using namespace std;
main(){
string m;
cout<<"enter the movie name:";
cin>>m;
float p;
cout<<"enter the adult ticket price:$";
cin>>p;
float c;
cout<<"enter the child ticket price :$";
cin>>c;
int n;
cout<<"enter the number of adult tickets sold:";
cin>>n;
int s;
cout<<"enter the number of child tickets sold:";
cin>>s;
float a;
cout<<"enter the percentage of amount to be donated to charity:";
cin>>a;
cout<<"------------------------------------------------------------"<<endl;
float t;
t=p*n+c*s;
cout<<"movie:"<<m;
cout<<"total amount generated from ticket sales:$"<<t<<endl;
float d;
d=(t)*15/100;
cout<<"donation to charity(15):$"<<d<<endl;
int r;
r=t-d;
cout<<"remaining amount after donation:$"<<r<<endl;
}



