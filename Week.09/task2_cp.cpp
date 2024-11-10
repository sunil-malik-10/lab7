#include <iostream>
using namespace std;
int odd_discount(string moviename)
{
   string movies[]={"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price= 500;
    int afterdiscount;
    int discount;
    for(int i=0;i<5; i=i+1)
    {
        if(movies[i]==moviename)
        {
            if(i%2==0)
            {
                return price;
            }
        }
        else
            {
                discount=(price*5)/100;
                afterdiscount=price-discount;
            }
            return afterdiscount;
    
    }
}
int main() 
{     
    int price=500;
    string moviename="";
    cout<<"Enter the name of the movie:";
    cin>>moviename;
    int total_price=odd_discount(moviename);
    cout<<"Total ticket cost is "<<total_price;
}