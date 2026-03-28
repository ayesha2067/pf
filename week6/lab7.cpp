#include<iostream>
using namespace std;
main(){
    string word;
    char letter;
    cout<<"enter word : " ;
    cin>>word;
    cout<<"enter character you want to find : " ;
    cin>>letter;
    bool isfound=false;
    for(int i=0;word[i]!='\0';i++){
        if(letter==word[i]){
            isfound=true;
            break;
            
        }
    }
        
       if(isfound){
        cout<< letter <<"is found in : " << word ;
       }
       else{
        cout<< letter << "is not found in : " << word ;
       }
       return 0;
    }
