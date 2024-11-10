#include <iostream>
using namespace std;

int main() {
    int length;
    string str1, str2;

    cout << "Enter the size of strings: ";
    cin >> length;

    cout << "Enter first string of " << length << " size: ";
    cin >> str1;

    cout << "Enter second string of " << length << " size: ";
    cin >> str2;

    int matchCount = 0;

    for (int m = 0; m < length; m++) {
        for (int n = 0; n < length; n++) {
            if (str1[m] == str2[n]) {
                matchCount++;
                str2[n] = '#';
                break;
            }
        }
    }

    cout << matchCount;
}
