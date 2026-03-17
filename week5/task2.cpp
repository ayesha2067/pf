#include<iostream>
using namespace std;
main(){
    int n1=0;
    int n2=1;
    int n;
    cout<<"how many numbers of fibnocci series you want to print";
    cin>>n;
    cout<<n1<<","<<n2;
    int next;
    for(int i=1;i<=n;i++){
        next=n1+n2;
       
        cout<<","<<next;
         n1=n2;
        n2=next;}}
