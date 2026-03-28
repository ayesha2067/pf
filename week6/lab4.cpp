#include<iostream>
using namespace std;
main(){
    int numbers[5];
    for(int count=0;count<5;count++){
        cout<<"enter number : ";
        cin>>numbers[count];
    }
    cout<<"the first element is: " << numbers[0] <<endl;
    cout<<"the last element is : " << numbers[4] <<endl;
}