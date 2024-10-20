#include <iostream>
using namespace std;
int printing_stars(int);
int main() 
{ 
    int row_size;
    cout<<"Enter desired number of rows : ";
    cin>>row_size;
    printing_stars(row_size);          
}
int printing_stars(int row_size)
{
    int rows;
    for(rows=row_size;rows>=1;rows=rows-1)
    {
        for(int cols=rows;cols>=1;cols=cols-1)
        {
            cout<<"*";
        }
       cout<<endl;
    }
}