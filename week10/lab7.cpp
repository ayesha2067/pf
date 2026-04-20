#include<iostream>
#include<cmath>
using namespace std;
void calculateheight(float num1,float rad);
int main(){


float num1,num2;
float rad;

cout<<" enter the distance from the base of the tree ( in feet ):  ";
cin>>num1;
cout<<" enter the angle of elevation ( in degrees ) : ";
cin>>num2;
rad=num2*3.14/180;
calculateheight(num1,rad);
return 0;  

}
void calculateheight(float num1, float rad){
    int height=num1*tan(rad);
    cout<<"height is : " << num1*tan(rad);
}
