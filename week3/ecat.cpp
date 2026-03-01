#include<iostream>
using namespace std;
main(){
string name;
cout<<"enter student name:";
cin>>name;
int marks1;
cout<<"enter matriculation marks(out of 1100):";
cin>> marks1;
int marks2;
cout<<"enter intermediate marks(out of 550):";
cin>> marks2;
float marks3;
cout<<"enter ECAT marks(out of 400):";
cin>> marks3;
float aggregate=(marks1/1100)*10+(marks2/550)*40+(marks3/400)*50;
cout<<"aggregate is"<<aggregate<<endl;
}


