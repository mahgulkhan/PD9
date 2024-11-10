#include <iostream>
using namespace std;
int main()
{
    string name;
    int kgs;
    float tprice;
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = { 60, 70, 40, 30};
    cout << "Enter name of fruit: ";
    cin >> name;
    cout << "Enter amount in kgs: ";
    cin >> kgs;
    for (int i =0;i<4;i++)
    {
        if (fruit[i]==name)
        {
            tprice=price[i]*kgs;
        }
    }
    cout << "The total price for " <<kgs<< " of " << name << "s is " << tprice;
}