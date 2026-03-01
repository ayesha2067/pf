#include<iostream>
using namespace std;
main(){
int f;
cout<<"enter the size of fertilizer bag in pounds:";
cin>>f;
float cost;
cout<<"enter the cost of the bag :$";
cin>>cost;
float cost_per_pound;
cost_per_pound=cost/f;
float area;
cout<<"enter the area in square feet that can be converted by the bag:";
cin>>area;
float cost_per_square_foot;
cost_per_square_foot=cost/area;
cout<<"cost of fertilizer per pound is $ : "<<cost_per_pound<<endl;
cout<<"the cost of fertilizer per square foot is $: "<<cost_per_square_foot<<endl;
}


