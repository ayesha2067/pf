#include<iostream>
using namespace std;
int main(){
int n;
int n1[100];
cout<<"enter number of elements for first array: ";
cin>>n;
cout<<"enter " << n << " elements for first array,one per line : ";
for (int i=0;i<n;i++){
cin>>n1[i];
}int num;
cout<<"enter number of elements for second array: ";
cin>>num;

cout<<"enter " << num << " elements for second array,one per line : ";
int num1[100];
for(int j=0;j<num;j++){
    cin>>num1[j];
}
cout<<"resulting array: ["<<n1[0]<<",";
for(int k=0;k<num;k++){
cout<<num1[k]<<",";
}
cout<<n1[1]<<"]"<<endl;
    return 0;}