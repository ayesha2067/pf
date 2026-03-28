#include <iostream>
using namespace std;
int main(){
int Resistors,total_resistance=0;
int r[100];
cout<<"enter the number of resistors in series: ";
cin>>Resistors;
cout<<"enter the resistance values (in ohms) of the " << Resistors << ",one per line "  ;
for(int i=0;i<Resistors;i++){

cin>>r[i];

total_resistance+=r[i];
}
cout<<"total resistance: "<<total_resistance;
return 0;}