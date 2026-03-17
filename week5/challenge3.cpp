#include<iostream>
using namespace std;
 int main(){
    
    string pin="";
    int currentaccountbalance=0;
    int amount;
    int balance,balance1;
    
    int choice;
    for(int i=1;i<=3;i++){
        cout<<"enter pin : ";
        cin>>pin;
        if(pin=="1234"){
            cout<<"login successfull "<<endl;
            break;
        }
        else{
            cout<<"wrong login "<<endl;
        }
        if(i==3 && ! (pin=="1234")){
            cout<<"too many attempts .program ends"<<endl;
            return 0;
        }
        
        }
        for(int h=1;h<=4;h++){
            cout<<endl;
            cout<<"------ATM menu------"<<endl;
            cout<<"1. check balance     "<<endl;
            cout<<"2. deposit money   "<<endl;
            cout<<"3. withdraw money     "<<endl;
            cout<<"4. exit            "<<endl;
            
            cout<<"enter choice : "<<endl;
            cin>>choice;

            if(choice==1){
                cout<<"current account balance : "<<endl;
                cin>>currentaccountbalance;  
        }
        else if(choice==2){
            cout<<"enter amount : ";
            cin>>amount;
          balance=amount+currentaccountbalance;
            cout<<"deposited amount " << amount << "total balance : "<<balance<<endl;
        }
         
        else if (choice==3){
            int amount1;
            cout<<"enter amount : "<<endl;
            cin>>amount1;
         
            if(amount1<balance){
                int current=balance-amount1;
                cout<<"withdrawn amount = "<< amount1 << "current balance = " << current <<endl;
            }
            else{
                cout<<"insufficient balance "<<endl;
            }

        }
        else if (choice==4){
            cout<<" exit"<<endl;
        break;

    }
        }

    }