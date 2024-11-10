#include <iostream>
using namespace std;
float priceInkilograms(string fruit,float kg)
{
   string fruits[]={"peach", "apple", "guava", "watermelon"};
    int price[] = {60, 70, 40, 30};
    float product=1;
    for(int i=0;i<4; i=i+1)
    {
        if(fruits[i]==fruit)
        {
            product=kg*price[i];
        }
    }
    return product;
}
int main() 
{     
    float kg;
    string fruit="";
    cout<<"Enter the name of the fruit:";
    cin>>fruit;
    cout<<"Enter the quantity in kilograms:";
    cin>>kg;
    float total_Price=priceInkilograms(fruit,kg);
    cout<<"Total price of "<<fruit<<" of "<<kg<<" Kgs"<<":"<<total_Price;
}