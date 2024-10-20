#include <iostream>
using namespace std;
float percentage(int);
int main() 
{ 
    int count;
    cout<<"Enter numbers count: ";
    cin>>count;
    percentage(count);
}
float percentage(int count)
{
    int number;
    float per1,per2,per3,per4,per5;
    for(int n=1;n<=count;n=n+1)
    {
        cout<<"Enter a number : ";
        cin>>number;
       if(number<200)
           per1++;
       else if(number>=200 && number<400)
           per2++;
       else if(number>=400 && number<600)
           per3++;
       else if(number>=600 && number<800)
           per4++;
       else if(number>=800)
           per5++;
    }
    cout<<""<<((per1*100)/count)<<"%"<<endl;
    cout<<""<<(per2*100)/count<<"%"<<endl;
    cout<<""<<(per3*100)/count<<"%"<<endl;
    cout<<""<<(per4*100)/count<<"%"<<endl;
    cout<<""<<(per5*100)/count<<"%"<<endl;
    
}
