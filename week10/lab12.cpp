#include <iostream>
using namespace std;

int calculateDigitSum(int val) {
    int total = 0;
    while (val != 0) {
        int digit = val % 10;
        total += digit;
        val = val / 10;
    }
    return total;
}


void showParity(int digitTotal) {
    if (digitTotal % 2 == 0) {
        cout << "Evenish" << endl;
    }
    else {
        cout << "Oddish" << endl;
    }
}

int main() {
    int inputNum;
    cout << "Please enter a 5-digit integer: ";
    cin >> inputNum;

   
    int finalSum = calculateDigitSum(inputNum);
    showParity(finalSum);

    return 0;
}