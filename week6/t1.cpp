#include<iostream>
using namespace std;
main(){
    int num=5;
    int numb[num];
    for(int i=0;i<num;i=i+1){
        cout<<"the number is "<< i+1 << " : " ;
        cin>>numb[i];

    }
    int largest=numb[0];
    for(int x=1;x<num;x=x+1){
        if(numb[x]>largest){
            largest=numb[x];
        }
    }
    cout<<"largest number is " << largest <<endl;
}