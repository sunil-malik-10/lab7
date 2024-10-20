#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int cargo;
    double totalWeight = 0, busWeight = 0, truckWeight = 0, trainWeight = 0;
    double totalCost = 0;


    cout<<"Enter the count of cargo for transportation: ";
    cin >> cargo;
    
    for (int i = 0; i < cargo; i++) 
    {
        int cargoTonnage;
        cout<<"Enter the tonnage of cargo: ";
        cin >> cargoTonnage;
        totalWeight += cargoTonnage;

        if (cargoTonnage <= 3) 
        {
            busWeight += cargoTonnage;
            totalCost += cargoTonnage * 200;
        } else if (cargoTonnage <= 11) 
        {
            truckWeight += cargoTonnage;
            totalCost += cargoTonnage * 175;
        } else 
        {
            trainWeight += cargoTonnage;
            totalCost += cargoTonnage * 120;
        }
    }

    double avgPricePerTon = totalCost / totalWeight;
    double busPercent = (busWeight / totalWeight) * 100;
    double truckPercent = (truckWeight / totalWeight) * 100;
    double trainPercent = (trainWeight / totalWeight) * 100;

    cout << fixed;
    cout << setprecision(2);
    cout << avgPricePerTon << endl;
    cout << busPercent << "%" << endl;
    cout << truckPercent << "%" << endl;
    cout << trainPercent << "%" << endl;
}
