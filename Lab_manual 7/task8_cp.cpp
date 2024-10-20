#include <iostream>
using namespace std;
int calculate_price(int,int,int);
int main() 
{ 
    int age,machine_price , toy_price;
    cout<<"Enter Lilly's age :";
    cin>>age;
    cout<<"Enter the price of the washing machine :";
    cin>>machine_price;
    cout<<"Enter the unit price of each toy:";
    cin>>toy_price;
    calculate_price(age,machine_price , toy_price);
    return 0;
}
int calculate_price(int age,int machine_price ,int toy_price)
{
    int total_money=0 ;
    int count=0;
    int moneyreci=0;
    float per1,per2,per3,per4,per5;
    for(int n=1;n<=age;n=n+1)
    {
       if(n%2==0)
       {
           moneyreci=moneyreci+10;
           total_money=total_money+moneyreci-1;
       }
       else 
       {
           count++;
       }
    }
    total_money=total_money+count*toy_price;
        if(total_money>= machine_price)
        {
            cout<<"Yes!"<<endl<<total_money-machine_price;
        }
      else
      {
          cout<<"No!"<<endl<<machine_price-total_money;
      }
      return total_money;
}
