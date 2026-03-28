#include <iostream>
using namespace std;
int main(){
int c;
string c1[100];
cout<<"enter number of cords: ";
cin>>c;
cout<<"enter cord per line: ";
for(int i=0;i<c;i++){

cin>>c1[i];
string w=c1[i];

if(w[w.length()-1]!='7'){
c1[i]=w+"7";}
}
cout<<"jazzified chords: ";
cout<<"[";
for(int i=0;i<c;i++){
    cout<<c1[i]<<",";
}cout<<"]";

    return 0;
}