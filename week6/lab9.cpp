#include<iostream>
using namespace std;
main(){
    string name;
    cout<<"string : " ;
    cin>>name;
     string reversed="";
    for(int i = name.length() -1;i>=0;i--){
        reversed+= name[i];

        cout<<"reversed string : " <<reversed ;
    }
    return 0;

}