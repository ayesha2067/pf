#include<iostream>
using namespace std;
main(){
    while(true){
        int choice;
        cout<<"-----menu-----"<<endl;
        cout<<"1. say hello "<<endl;
        cout<<"2. say goodbye"<<endl;
        cout<<"3. exit        "<<endl;

        cout<<"enter choice : " <<endl;
        cin>>choice;
         
        if (choice==1){
            cout<<"hello! welcome to the program . " <<endl;

        }
        else if(choice==2){
            cout<<"goodbye! have a nice day . " <<endl;

        }
        else if(choice==3){
            cout<<"program ends"<<endl;
            break;
        }
        else{
            cout<<"invalid choice! " <<endl;
        }
    }
}
