#include <iostream>
using namespace std;
int calculatePrice(int money, int years);
int main() 
{ 
    int years;
    int money;
    cout<<"Enter Money : ";
    cin>>money;
    cout<<"Enter Year : ";
    cin>>years;
    int amount_needed=calculatePrice(money, years);
    if(amount_needed<money)
    {
        cout<<"Yes! He will live a carefree life and will have "<<
        money-amount_needed<< " dollars left";
    }
    else
    {
        cout<<"He will need "<<amount_needed-money<<" dollars to survive";
    }
}
int calculatePrice(int money, int years)
{
    int amount;
    int age=18;
    for(int n=1800;n<=years;n++)
    {
       if(n%2==0)
       {
           amount=amount+12000;
       }
       else
       {
           amount=amount+(12000+(50*age));
       }
       age++;
    }
    return amount;
}
