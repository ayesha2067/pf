#include<iostream>
using namespace std;
int main(){
int correctPIN=1234;
int pin[3],choice,balance=1000,am;
bool login=false;
for(int i=0;i<3;i++){
cout<<"enter ATM PIN: ";
cin>>pin[i];
if(pin[i]==correctPIN){
    login=true;
    cout<<"Login successful\n";
    break;
}else{
    cout<<"Incorrect PIN\n";
}
}
if(login==true){
    while(true){
        cout<<"\n----ATM Mean----\n";
        cout<<"1. check balance\n";
        cout<<"2.deposit money\n";
        cout<<"3.withdraw money\n";
        cout<<"4.exit\n";
        cout<<"enter your choice";
        cin>>choice;
        if(choice==1){
            cout<<"current balance: "<<balance<<endl;
        }else if(choice==2){
            cout<<"enter amount to deposit: ";
            cin>>am;
            balance=balance+am;
            cout<<"updated balance: "<<balance<<endl;
        }else if(choice==3){
            cout<<"enter amount to withdraw: ";
            cin>>am;
            if(am<=balance && am>0){//remember
                balance=balance-am;
                cout<<"remaining balance: "<<balance<<endl;
            }else{
                cout<<"insufficiant balance\n";
            }
        }else if(choice==4){
            cout<<"thank you for using ATM\n";
            break;
        }else{
            cout<<"invalid choice\n";
        }}}else{
            cout<<"too many incorrect attempts. access denied:\n";
        }
    
    return 0;
}