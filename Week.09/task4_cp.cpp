#include <iostream>
using namespace std;
bool having_seven(int elements)
{ 
    int number[elements];
     cout<<"Enter "<<elements<<" elements,one per line: ";
     cout<<endl;
    for(int i=0;i<elements; i=i+1)
    {
       cin>>number[i];
    }
    for(int i=0;i<elements; i=i+1)
    {
        int temp = number[i];
        while (temp > 0) 
        {
            if (temp % 10 == 7)
            {  
                return true;
            }
            temp /= 10; 
        }
    }

    return false;
}
int main() 
{     
    
    int elements;
    cout<<"Enter the number of elements in array: ";
    cin>>elements;
    if(having_seven(elements))
    {
        cout<<"BOOM!";
        
    }
    else
    {
    cout<<"There is no 7 in the array";
    
}
  return 0;
}