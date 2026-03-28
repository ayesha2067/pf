#include<iostream>
using namespace std;
main(){


char word[100];
cout<<"enter word: ";
cin>>word;
for(int i=0;word[i]!='\0';i++){
cout<<word[i]<<" found at position: "<<i<<endl;
}
    return 0;//5,9
} 