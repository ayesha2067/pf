#include <iostream>
using namespace std;


float calculateAccumulatedWater(float rateA, float rateB, float timeInHours) {
    float result = (rateA + rateB) * timeInHours;
    return result;
}


void generateReport(float capacity, float rateA, float rateB, float timeInHours, float currentIntake) {
    if (currentIntake <= capacity) {
   
        int poolStatus = (currentIntake / capacity) * 100;
        int contributionPipeA = (rateA * timeInHours / currentIntake) * 100;
        int contributionPipeB = (rateB * timeInHours / currentIntake) * 100;
        
        cout << "Pool Status: " << poolStatus << "% full. Pipe 1 contributes: " 
             << contributionPipeA << "%. Pipe 2 contributes: " << contributionPipeB << "%." << endl;
    }
    else {
        float excess = currentIntake - capacity;
        cout << "After " << timeInHours << " hours, the pool has overflowed by " << excess << " liters." << endl;
    }
}

int main() {
    float poolVolume, flowA, flowB, absentHours;

    cout << "Input total pool capacity (liters): ";
    cin >> poolVolume;
    
    cout << "Input Pipe 1 flow rate (L/h): ";
    cin >> flowA;
    
    cout << "Input Pipe 2 flow rate (L/h): ";
    cin >> flowB;
    
    cout << "Input worker absence duration (hours): ";
    cin >> absentHours;

    
    float totalIntake = calculateAccumulatedWater(flowA, flowB, absentHours);
    generateReport(poolVolume, flowA, flowB, absentHours, totalIntake);

    return 0;
}