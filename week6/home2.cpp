#include <iostream>
using namespace std;
int main(){
int n,num[100],t=0;
cout<<"enter number: ";
cin>>n;
cout<<"numbers in array: ";
for(int i=0;i<n;i++){
    cin>>num[i];

if(num[i]%2==0){
 t++;
}
}
cout<<"total even numbers: "<<t<<endl;


    return 0;
}