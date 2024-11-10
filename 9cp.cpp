#include <iostream>
using namespace std;
bool valid(string pin);
void dance(string moves[10],string pin);
int count;

int main()
{
    string pin,moves[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box-Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    cout << "Enter PIN: ";
    cin >> pin;
    if(valid(pin))
    {
        dance(moves,pin);
    }
    else
    {
        cout << "Invalid PIN."<<endl;
    }
}
bool valid(string pin)
{
    bool status = true;
    for (int x =0;pin[x]!='\0';x++)
    {
        count++;
    }
    if (count!=4)
    {
        status = false;
    }
    for(int i=0;i<4;i++)
    {
        if(pin[i]<'0'|| pin[i]>'9')
        {
            status = false;
        }
    }
    return status;
}
void dance(string moves[10],string pin)
{
    if (count == 4) 
    {
        for (int i=0;i<4;i++) 
        {
            if (pin[i]>='0' && pin[i]<='9') 
            {
                int y= (pin[i]-'0'+i)%10;
                cout << moves[y] << " ";
            } 
        }
    cout << endl;
    } 
}