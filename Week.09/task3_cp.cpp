#include <iostream>
using namespace std;
int odd_OR_even(string word)
{ 
    int count=0;
    bool word_entered=true;
    for(int i=0;word[i]!='\0'; i=i+1)
    {
       count++;
    }
    return (count%2==0);
}
int main() 
{     
    string word="";
    cout<<"Enter the string: ";
    cin>>word;
    bool is_even=odd_OR_even(word);
   if(is_even)
   {
      cout<<"true";
   }
   else
   {
    cout<<"false";
}
 return 0;
}