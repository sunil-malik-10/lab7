#include <iostream>
using namespace std;

int main() {
    int visitedDays;
    int totalTreated = 0, totalUntreated = 0;
    int doctors = 7;

    
    cout << "Enter the number of days: ";
    cin >> visitedDays;

    for (int x = 1; x <= visitedDays; x++) 
    {
        int patients;
        cout << "Enter the number of patients on day " << x << ": ";
        cin >> patients;

        if (x % 3 == 0 && totalUntreated > totalTreated) 
        {
            doctors++;
        }
        if (patients <= doctors) 
        {
            totalTreated += patients;
        } else 
        {
            totalTreated += doctors;
            totalUntreated += (patients - doctors);
        }
    }
    cout << "Treated patients: " << totalTreated << endl;
    cout << "Untreated patients: " << totalUntreated << endl;
}