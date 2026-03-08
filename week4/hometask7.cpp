#include<iostream>
using namespace std;
main(){
    string shape;
    cout<<"enter shape: ";
    cin>>shape;
    if(shape == "square"){
        float side,area;
        cout<<"enter no1: ";
        cin>>side;
        area=side*side;
        cout<<"AREA: "<<area;
    }
    if(shape == "rectangle"){
        float side1,side2,area;
        cout<<"enter no1 :";
        cin>>side1;
        cout<<"enter no2: ";
        cin>>side2;
        area=side1*side2;
        cout<<"AREA:"<<area; 
       }
       if(shape =="circle"){
        float pi=3.14;
        float r,area;
        cout<<"enter radius: ";
        cin>>r;
        area=(r*r)*pi;
        cout<<"AREA:"<<area;
       }
       if(shape == "triangle"){
        float b,h ,area;
        cout<<"enter base: ";
        cin>>b;
        cout<<"enter height: ";
        cin>>h;
        area=(b*h)*(0.5);
        cout<<"AREA:"<<area;

       }
}