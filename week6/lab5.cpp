#include<iostream>
using namespace std;
main(){
    int num;
    cout<<"enter number of element : " ;
    cin>>num;
    cout<<" enter " << num << " number " <<endl;
    int numbers[num];
    for(int count=0;count<num;count++){
        cout<<"enter number " << (count+1) <<":";
        cin>>numbers[count];
    }
    cout<<"the entered numbers are : " <<endl;
    for(int count=0;count<num;count++){
        cout<<numbers[count]<<"";
    }
    cout<<endl;
}