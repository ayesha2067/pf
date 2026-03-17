#include<iostream>
using namespace std;
main(){
    string studentname="";
    string username;
    string password;
    int studentage=0;
    string coursename="";
    int choice;
    for(int i=1;i<=3;i++){
        cout<<"enter username : ";
        cin>>username;

        cout<<"enter password : ";
        cin>>password;
        if(username=="admin" && password =="1234"){
            cout<<"login successfull "<<endl;
        }
        else{
            cout<<"wrong login "<<endl;
        }
        if(i==3 && ! (username=="admin"&&password=="1234")){
            cout<<"too many attempts .program ends"<<endl;
        }
        
        }
        for(int h=1;h<=5;h++){
            cout<<endl;
            cout<<"------university management system------"<<endl;
            cout<<"1. add student     "<<endl;
            cout<<"2. view student    "<<endl;
            cout<<"3. add course      "<<endl;
            cout<<"4. exit            "<<endl;
            
            cout<<"enter choice : "<<endl;
            cin>>choice;

            if(choice==1){
                cout<<"enter student name : "<<endl;
                cin>>studentname;  
                cout<<"enter age : "<<endl;
                cin>>studentage; 
                
            cout<<"student added successfully ";
        }
        else if(choice==2){
            if(studentname!=""){
            cout<<"student name : "<<studentname<<endl;
            cout<<"student age : "<<studentage<<endl;

        }
        else{
            cout<<"no student record found "<<endl;
        
         }
         }
        else if (choice==3){
            cout<<"course name : "<<endl;
            cin>>coursename;

            cout<<"course added : "<<coursename<<endl;

        }
        else if (choice==4){
            cout<<"program exit"<<endl;
        break;
    }
    else{
        cout<<" invalid choice "<<endl;
    }
        }

    }



    
