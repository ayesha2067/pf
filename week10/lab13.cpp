#include <iostream>
#include <string>

using namespace std;


void fastForwardTime(string hrInput, string minInput) {
    int h = stoi(hrInput);
    int m = stoi(minInput);

  
    m += 15;

    if (m >= 60) {
        h += 1;
        m -= 60;
    }

    if (h >= 24) {
        h = 0;
    }

    
    string finalHr = to_string(h);
    string finalMin = to_string(m);

    cout << "Advanced Time: " << finalHr << ":" << finalMin << endl;
}

int main() {
    string userHours, userMinutes;

    cout << "Input hours [0-23]: ";
    cin >> userHours;

    cout << "Input minutes [0-59]: ";
    cin >> userMinutes;

    
    fastForwardTime(userHours, userMinutes);

    return 0;
}