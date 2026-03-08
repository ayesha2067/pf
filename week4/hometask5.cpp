#include<iostream>
using namespace std;
int main(){
    int holidays,difference;
    float hours=30000;
    cout<<"holidays : ";
    cin>>holidays;
    int working_days_per_year=365-holidays;
    int time_for_games_on_working_days=working_days_per_year*63;
    int time_for_games_on_holidays= holidays*127;
    int total_playing_time=time_for_games_on_working_days+time_for_games_on_holidays;

    
    if(hours>30000){
        difference=total_playing_time-hours;
       hours=difference/60;
        int mint=difference%60;
        cout<<"tom will run away"<<endl;
        cout<<hours<<"hours and "<<mint << "minutes for play";
    }
    else{
        difference=hours-total_playing_time;
        hours=difference/60;
        int mint=difference%60;
        cout<<"tom sleeps well"<<endl;
        cout<<hours<<"hours and "<<mint << "minutes less for play";
        
    }





}