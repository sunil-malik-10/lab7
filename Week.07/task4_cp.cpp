#include <iostream>
using namespace std;
int triangle(int);
int main() {
       int number;
       cout<<"Enter the number of triangle :";
       cin>>number;
      cout<<"Dots in the triangle :"<< triangle(number);
}
int triangle(int number)
{
    int sum=0;
    for(int i=1;i<=number;i=i+1)
    {
         sum+=i;
    }
    return sum;
}
