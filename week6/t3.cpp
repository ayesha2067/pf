#include<iostream>
using namespace std;
main(){
  string name;
  cout<<"enter a string : " <<endl;
  getline(cin,name);
  int count=0;
  for(int idx=0 ; idx<name.length() ; idx++){
    count++;}
     if(count%2==0){
        cout<<"true"<<endl;
     }
     else{
        cout<<"false"<<endl;
     }
    
    return 0;
  }

