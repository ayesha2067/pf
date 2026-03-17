#include <iostream>
using namespace std;
main(){
    int multiple;
    int table;
    cout<<"enter table:" ;
    cin>>table;
    for(int num=1;num<=20;num++){
        multiple=table*num;
        cout<<table<<"*"<< num <<"=" <<multiple<<endl;

    }
}