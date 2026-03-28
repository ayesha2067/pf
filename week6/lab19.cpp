#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool isSpecial = true;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0 && arr[i] % 2 != 0) {
            isSpecial = false;
            break;
        }
        if (i % 2 != 0 && arr[i] % 2 == 0) {
            isSpecial = false;
            break;
        }
    }

    if (isSpecial)
        cout << "The array is special";
    else
        cout << "The array is not special";

    return 0;
}