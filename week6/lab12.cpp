#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements: ";
  cin>>n; 
  int arr[100],u[100]; 
  int count=0;  
  cout<<"enter numbers, one per line: ";
    for(int k=0;k<n;k++){
      
    cin>>k;
  bool is=false;
    for (int j=0;j<count;j++){
      if(k==u[j]){
        is=true;
        break;
      }
    }
      if(is){
         cout<<"already entered: "<<k<<endl;
      }else{
        u[k]=k;
       count++;
      }
    }cout<<"unique numbers entered: ";
    for(int j=0;j<count;j++){
cout<<u[j]<<endl;
    }
    return 0;
}