#include <iostream>
using namespace std;
main(){
    int n;;
cout<<"enter a number: ";
cin>>n;
if(n<=0){
    cout<<"invalid output.number of elements should be greater than 0 ";
    return 0;
}
int arr[n];
cout<<"enter " << n << "numbers,one per line : " <<endl;

for(int i=0;i<n;i++){

   cin>>arr[i]; 
}
cout<<"numbers in reverse order: ";
for(int i=n-1;i>=0;i--){
    cout<< arr[i]<<"";
    

}
    return 0;
}