#include<iostream>
using namespace std;
main(){
int one_MB=1024;
int one_KB=1024;
int one_Bytes=8;
int MB;
cout<<"enter the size in megabytes(MB):";
cin>> MB;
float bits;
bits=MB*1024*1024*8;
cout<<MB<<"mb is equivalent to"<<bits<<"bits";
}