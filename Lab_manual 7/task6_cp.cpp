#include <iostream>
using namespace std;
int calculateGCD(int,int);
int calculateLCM(int ,int);
int main() 
{ 
    int number1,number2;
    cout<<"Enter first number : ";
    cin>>number1;
    cout<<"Enter second number : ";
    cin>>number2;
    cout<<"GCD : " <<calculateGCD(number1, number2)<<endl;
    cout<<"LCM : " <<calculateLCM(number1,number2);
}
int calculateGCD(int number1,int number2)
{
    
    for(int n=min(number1,number2);n>=1;n--)
    {
       if(number1%n==0 && number2%n==0)
       {
           return n;
       }
    }
}
int calculateLCM(int number1,int number2)
{
    return (number1*number2)/calculateGCD( number1, number2);
    
    
}