#include <iostream>
using namespace std;

int main() {
    int numSwitches, totalTime;
    
    cout << "Enter how many times you want to switch the colors: ";
    cin >> numSwitches;

    string colorSequence[numSwitches];
    cout << "Enter colors one by one, one per line:" << endl;
    
    for (int i = 0; i < numSwitches; i++) {
        cin >> colorSequence[i];
    }

    int switchCount = 0;
    for (int j = 0; j < numSwitches - 1; j++) {
        if (colorSequence[j] != colorSequence[j + 1]) {
            switchCount++;
        }
    }

    totalTime = (numSwitches * 2) + switchCount;
    cout << totalTime;
}
