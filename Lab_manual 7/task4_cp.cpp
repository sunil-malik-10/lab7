#include <iostream>
using namespace std;
int frequencyChecker(int,int);
int main() 
{ 
    int number,digit;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"Enter a digit to check : ";
    cin>>digit;
    cout<<"Frequency : "<<frequencyChecker(number,digit);          
}
int frequencyChecker(int number, int digit)
{
    int count=0;
    for(;number!=0;)
    {
          if(number%10 == digit)
       {
           count++;
       }
        number=number/10;
       
    }
  return count;
}