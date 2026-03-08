#include<iostream>
using namespace std;
int main(){
    string word1,word2;
    cout<<"enter word1:";
    cin>>word1;
    cout<<"enter word2:";
    cin>>word2;
    if(word1==word2){
        cout<<"yes,the words are same";
    }
    else{
        cout<<"no,the words are different";
    }
}