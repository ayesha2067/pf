#include <iostream>
#include <string>
using namespace std;

int main() {
    string u[100], admin[100],c[100];
    int PIN=1234, pin[3], choice, a[100], i=0, k=0;
    bool login=false;

    for(int i=0; i<3; i++) {
        cout << "enter password: ";
        cin >> pin[i];
        if(u[i]==admin[i] && pin[i] == PIN) {
            login=true;
            cout << "login successful\n";
            break;
        } else {
            cout << "login failed\n";
        }
    }

    if(login == true) {
        while(true) {
            cout << "\n1.add name\n2.view students\n3.add course\n4.view courses\n5.exit\n";
            cout << "enter your choice: ";
            cin >> choice;

            if(choice == 1) {
                cout << "enter name: ";
                cin >> u[i];
                cout << "enter age: ";
                cin >> a[i];
                i++;
                cout << "student added successfully\n";
            }
            else if(choice == 2) {
                for(int j=0; j<i; j++) {
                    cout << "student " << j+1 << ":" << u[j] << " age: " << a[j] << endl;
                }
            }
            else if(choice == 3) {
                cout << "enter course: ";
                cin >> c[k];
                k++;
                cout << "course added successfully\n";
            }
            else if(choice == 4) {
                for(int j=0; j<k; j++) {
                    cout << "course " << j+1 << ":" << c[j] << endl;
                }
            }
            else if(choice == 5) {
                break;
            }
        }
    }
    return 0;
}