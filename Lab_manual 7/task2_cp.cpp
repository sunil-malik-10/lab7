#include <iostream>
using namespace std;
int generateFibonacci(int);
int main() 
{ 
    int length;
    cout<<"Enter the length of Fibonacci series: ";
    cin>>length;
    generateFibonacci(length);          
}
int generateFibonacci(int length)
{
    
    int n1=0;
    int n2=1;
    int next;
       if(length==1)
       {
           cout<<"0";
       }
       if(length>=2)
       {
           cout<<"0,1";
       }

    
    for(int n=3;n<=length;n=n+1)
    {
        next=n1+n2;
        cout<<","<<next;
        n1=n2;
        n2=next;
       
    }
  
    return 0;
}