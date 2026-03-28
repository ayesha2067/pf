#include<iostream>
using namespace std;
main(){
    float price=500;
    float discount;
    bool movie=false;
    float total;
    string movie_name;
    string movies[5]={"avengers"," starwars", "lucy", "mazerunner"," ballerina"};
    cout<<"enter movie name : " <<endl;
    cin>>movie_name;
    for(int i=0;i<5;i=i+1){
        if(movies[i]==movie_name){
            movie=true;
        
        
        
        if(i%2==0){
            discount=price*(10.0/100);
            total=price-discount;
        }

        
        else{
             discount=price*(5.0/100);
             total=price-discount;}
        
        
        }}
    
    cout<<"total price : " << total <<endl;



    }


