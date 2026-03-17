#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    int digit;
    cout<<"enter digit : ";
    cin>>digit;
    
    int count=0;
    for(int i =n ;i>0;i=i/10){
     if(i%10==digit){
        count++;
     }
    }
    
cout<<"freguency of  "<<digit<<"  in  "  <<n<<" is  "  <<count;    }

