#include<iostream>
using namespace std;
main(){
    
    while(true){
        int choice;
        int book;
        cout<<"-----restaurant management system-----"<<endl;
        cout<<"1. add book  "<<endl;
        cout<<"2. view book      "<<endl;
        cout<<"3. borrow book  "<<endl;
        cout<<"4. issue book       "<<endl;
        cout<<"5. exit       "<<endl;


        cout<<"enter your choice(1-5) : " <<endl;
        cin>>choice;

        if (choice==1){
            cout<<"enter book name: " <<endl;
            cin>>book;
            cout<<"you added a book : "<< book <<endl;
        }
        else if(choice==2){
            cout<<"book name "<< book <<endl;

        }
        else if(choice==3){
            cout<<"book to be borrowed :  "<<book <<endl;
        }
        else if(choice==4){
            cout<<"book to be issued : "<<book <<endl;
        }
        
        
        else if(choice==5){
            cout<<"exiting library system . goodbye!"<<endl;
            break;
        }
        else{
            cout<<"invalid choice "<<endl;
        }
        
    }
