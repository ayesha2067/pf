#include<iostream>
using namespace std;
main(){
int min;
cout<<"number of minutes:";
cin>>min;
int fps;
cout<<"frames per second:";
cin>>fps;
int frames;
frames=min*60*fps;
cout<<"total number of frames="<<frames;
}
