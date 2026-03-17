#include<iostream>
using namespace std;
main(){
    
    while(true){
        int choice;
        int n1;
        int n2;
        cout<<"-----simple calculator-----"<<endl;
        cout<<"1. addition  "<<endl;
        cout<<"2. subtraction    "<<endl;
        cout<<"3. multiplication  "<<endl;
        cout<<"4. division       "<<endl;
        cout<<"5. clear screen     "<<endl;
        cout<<"6. exit                "<<endl;

        cout<<"enter your choice(1-6) : " <<endl;
        cin>>choice;

        if (choice==1){
            cout<<"enter first number: "<<endl;
            cin>>n1;
            cout<<"enter second number : " <<endl;
            cin>>n2;
            int addition=n1+n2;
            cout<<"result"<< addition<<endl;
        }
        else if(choice==2){
            cout<<"enter first number: "<<endl;
            cin>>n1;
            cout<<"enter second number : " <<endl;
            cin>>n2;
            int subtraction=n2-n1;
            cout<<"result" <<subtraction<<endl;
        

        }
        else if(choice==3){
            cout<<"enter first number: "<<endl;
            cin>>n1;
            cout<<"enter second number : " <<endl;
            cin>>n2;
            int multiplication=n1*n2;
            cout<<"result " << multiplication<<endl;
        }
        else if(choice==4){
          cout<<"enter first number: "<<endl;
            cin>>n1;
            cout<<"enter second number : " <<endl;
            cin>>n2;
            int division=n1/n2;
            cout<<"result" << division <<endl;

        }
        else if(choice==5){
           cout<<"screen cleared "<<endl;
        }
        else if(choice==6){
            cout<<"exiting calculator.goodbye! "<<endl;
            break;
        }
        else{
            cout<<"invalid choice "<<endl;
        }
        
    }
}