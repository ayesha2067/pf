#include<iostream>
using namespace std;
main(){
    string name;
    cout<<"enter string : " <<endl;
    getline(cin,name);
    
    
        if(name.back()=='n'){
        cout<<"true"<<endl; 
        }
        else{
            cout<<"false"<<endl;
        }return 0;
    }
