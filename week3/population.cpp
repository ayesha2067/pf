#include<iostream>
using namespace std;
main(){
int W;
cout<<"enter the current world population:";
cin>> W;
int rate;
cout<<"enter the monthly birth rate(number of births per month):";
cin>>rate;
int population;
population=W+rate*12*30;
cout<<"population in three decades will be"<<population<<"population";
}
