#include<iostream>
using namespace std;
int main(){
int n,num[100],sum=0;
cout<<"enter number: ";
cin>>n;
cout<<"enter "<<n<<" numbers: ";
for(int i=0;i<n;i++){
cin>>num[i];

sum=sum+num[i];}

cout<<"sum: "<<sum<<endl;


    return 0;
}