#include<iostream>
using namespace std;
void add(int number1 ,int number2);

int main(){
int number1,number2;
cout<<"enter number 1 : ";
cin>>number1;
cout<<"enter number 2 : ";
cin>>number2;
add(number1,number2);
return 0;

}
void add(int number1,int number2 )
{
    cout<<"sum : " <<number1 +number2;
}
