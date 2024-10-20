#include <iostream>
using namespace std;
int number_of_digits(int);
int main() 
{ 
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"total number of digits in a number: "<<number_of_digits(number);          
}
int number_of_digits(int number)
{
    int count=0;
  
       if(number==0)
       {
           return 1;
       }
    for( ;number!=0;count=count+1)
    {
        number=number/10;
       
    }
  return count;
}