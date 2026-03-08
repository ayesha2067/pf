#include<iostream>
using namespace std;
int main(){
    string name1,name2,name3;
    int age1,age2,age3;
    cout<<"enter name of first brother :";
    cin>>name1;
    cout<<"enter age of first brother : ";
    cin>>age1;
    cout<<"enter name of second brother :";
    cin>>name2;
    cout<<"enter age of second brother : ";
    cin>>age2;
    cout<<"enter name of third brother: ";
    cin>>name3;
    cout<<"enter age of third brother: ";
    cin>>age3;
    if(name1<name2){
        (name1<name3);
        cout<<name1 <<"is youngest";}
        if(name2<name1){
            (name2<name3);
            cout<<name2 <<"is youngest";
        }else{
            cout<<name3 <<"is youngest";
        }
    }


