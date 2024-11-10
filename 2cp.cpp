#include <iostream>
using namespace std;
int main()
{
    string name,movies[5] = {"Gladiator", "StarWars", "Terminator","TakingLives", "TombRider"};
    int price = 500;
    float dis;
    cout << "Enter movie name: ";
    cin >> name;
    for (int i=0; i<5;i++)
    {
        if (name== movies[1] || name==movies[3])
        {
            dis=price-price*0.05;     
        }
        else 
        {
            dis=price-price*0.1;
        }   
    }
    cout << "The price of "<<name<<" is "<<dis;
}