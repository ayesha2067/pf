#include<iostream>
using namespace std;
int main(){
int n,number[100];
int max;
int min;

cout<<"enter number: ";
cin>>n;
cout<<"numbers in array: ";
max=number[0];
min=number[0];

for(int i=0;i<n;i++){
  cin>>number[i]; 
  }
  
for(int k=0;k<n;k++){
    if(number[k]>max){
        max=number[k];
    }
    if(number[k]<min){
        min=number[k];
    }
}

cout<<"largest number is : "<<max<<endl;
cout<<"smallest number is : "<<min<<endl;

    return 0;}