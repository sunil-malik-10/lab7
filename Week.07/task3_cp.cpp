#include <iostream>
using namespace std;
int amplify(int);
int main() {
       int number;
       cout<<"Enter the number to Amplify :";
       cin>>number;
       amplify(number);
   return 0;
}
int amplify(int number)
{
    int i;
    for(i=1;i<=number;i++)
    {
        if(i%4==0)
        {
            
            cout<<""<<i*10<<",";
        }
        else
        {
            cout<<i<<",";
        }
    }
    return number;
}
