#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter positive number :";
    cin>>n;
    while(n<=0){
        cout<<" error :" <<n<< "is not a positive value "<<endl;
        cout<<"enter positive value ";
        cin>>n;
    }
    cout<<"program ends"<<endl;
}