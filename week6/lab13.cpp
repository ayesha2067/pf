#include<iostream>
using namespace std;
int main(){
 int num,n[100];
 cout<<"enter number of elements: ";
 cin>>num;
 
 cout<<"enter numbers, one per line: "<<endl;
    for(int i=0;i<num;i++){
    cin>>n[i];
    }int k=n[0];
   for(int i=1;i<num;i++){if(n[i]>k){
    k=n[i];
   }
}
cout<<"largest numbers entered: "<<k<<endl;
    return 0;
}