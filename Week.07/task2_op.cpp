#include <iostream>
using namespace std;
void printUpperPart(int);
void printDownPart(int);
int main() {
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    rows = rows/2;
    printUpperPart(rows);
    printDownPart(rows);

}
void printUpperPart(int rows)
{
    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }

}
void printDownPart(int rows)
{
    for (int i = rows - 1; i >= 1; i--) 
    {
        for (int j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
}
