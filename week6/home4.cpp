#include<iostream>
using namespace std;
int main(){
string s[100];
int number;
cout<<"enter names of " << " 5 " << " students: ";
for(int i=0;i<5;i++)
cin>>s[i];


cout<<"student names are : ";
for(int j=0;j<5;j++)
cout<<s[j]<<endl;

    return 0;
}