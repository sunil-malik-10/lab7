#include <iostream>
using namespace std;
int digit_Sum(int number);
int main() 
{ 
    int number,digit;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"Sum : "<<digit_Sum( number);          
}
int digit_Sum(int number)
{
    int sum=0;
    for(;number!=0;)
    {
      sum+=number%10;
      number/=10;
    }
  return sum;
}