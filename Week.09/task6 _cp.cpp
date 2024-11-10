#include <iostream>
using namespace std;

int main() {
    int length, transformations, iteration = 1, index;
    cout << "Enter the size of array: ";
    cin >> length;
    int elements[length];
    
    cout << "Enter the number of transformations: ";
    cin >> transformations;
    
    for (index = 0; index < length; index++) {
        cout << "Enter element " << index + 1 << " of array: ";
        cin >> elements[index];
    }

    while (iteration <= transformations) {
        for (int j = 0; j < length; j++) {
            if (elements[j] % 2 == 0) {
                elements[j] = elements[j] - 2;
            } else {
                elements[j] = elements[j] + 2;
            }
        }
        iteration++;
    }

    cout << "[";
    for (int k = 0; k < length; k++) {
        cout << elements[k];
        if (k < length - 1) {
            cout << ", ";
        }
    }
    cout << "]";
}
