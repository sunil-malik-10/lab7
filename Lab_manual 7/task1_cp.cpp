#include <iostream>
using namespace std;
int table_of_number(int);
int main() 
{ 
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    table_of_number(number);          
}
int table_of_number(int number)
{
    int product=1;
    for(int n=1;n<=10;n=n+1)
    {
        product=number*n;
        cout<<number<<" x "<<n<<" = "<<product<<endl;
    }
}