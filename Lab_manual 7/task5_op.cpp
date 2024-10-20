#include <iostream>
using namespace std;
int sum();
int main() 
{
  cout<<"Sum:"<<sum();
}
int sum()
{
    int sum=0;
    for(int n=1;n<=100;n++)
    {
       sum+=n;
    }
    return sum;
}