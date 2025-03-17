#include <iostream>
using namespace std;

int main() {
    int a;


    cout << "Enter your mark: ";
    cin >> a;

    switch (a / 10) {
        case 10:
        case 9:
            cout << "A grade";
            break;
        case 8:
        cout << "B grade";
            break;
        case 7:
        cout << "C grade";
            break;
        case 6:
        cout << "D grade";
             break;
        case 5:
        cout << "F grade";
        break;
        default:
        cout << "Fail";
    }

}