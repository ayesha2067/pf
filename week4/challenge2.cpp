#include<iostream>
using namespace std;
int main(){
    int num_1,num_2;
    cout<<"please enter the number:";
    cin>>num_1;
    cout<<"please enter the second number:";
    cin>>num_2;
    if(num_1<num_2){
        cout<<"number"<<num_2<<"is greater than"<<num_1;
    }
    else{
        cout<<"number"<<num_1<<"is greater than"<<num_2;
    }
}