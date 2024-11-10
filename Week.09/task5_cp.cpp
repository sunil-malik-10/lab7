#include <iostream>
using namespace std;
bool identical_or_not(int elements)
{ 
    string number[elements];
     cout<<"Enter "<<elements<<" elements,one per line: ";
     cout<<endl;
    for(int i=0;i<elements; i=i+1)
    {
       cin>>number[i];
    }
    for(int i=0;i<elements; i=i+1)
    {
        for (int j = i + 1; j < elements; j++)
        {
            if (number[i] == number[j])
            {  
                return true;
            }
        }
    }

    return false;
}
int main() 
{     
    
    int elements;
    cout<<"Enter the number of elements in array: ";
    cin>>elements;
    if(identical_or_not(elements))
    {
        cout<<"True";
        
    }
    else
    {
    cout<<"False";
    
}
  return 0;
}