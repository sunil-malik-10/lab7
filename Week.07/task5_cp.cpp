#include <iostream>
using namespace std;
int is_prime(int);

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (is_prime(number))
    {
        cout<<"1";
    }
    else
    {
         cout<<"0";
    }

    return 0;
}

int is_prime(int number)
{   
    
    if (number == 2)
    {
        return 1;
    }

    for (int i = 2; i < number; i++) 
    {
        if (number % i == 0) 
        {
            return 0;
        }
    }
    
    return 1;
}
