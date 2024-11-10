#include <iostream>
using namespace std;

int main() {
    string danceMoves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string password;

    cout << "Enter 4-digit password: ";
    cin >> password;

    bool isValid = true;

    // Check if the input is a valid 4-digit number
    for (int i = 0; i < 4; i++) {
        if (password[i] < '0' || password[i] > '9') {
            cout << "Invalid input." << endl;
            isValid = false;
            break;
        }
    }

    if (isValid) {
        // Print moves based on password digits
        for (int j = 0; j < 4; j++) {
            int index = j + (password[j] - '0');
            if (index >= 10) {
                index = index % 10;
            }
            cout << danceMoves[index];
            if (j < 3) {
                cout << ", ";
            }
        }
    }

    return 0;
}
