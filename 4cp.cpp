#include <iostream>
using namespace std;
int main()
{
    int i;
    bool present;
    cout << "How many number you want to enter: ";
    cin >> i;
    int x,number,num[i];
    cout << "Enter numbers: " << endl;
    for (int n;n<i;n++)
    {
        cin >> num[n];
    }
    for ( x=0;x<=i;x++)
    {
        if (num[x]==7)
        {
            present=true;
        }
        else if (num[x]>9)
        {
            while (num[x]!=0)
            {
                number=num[x]%10;
                num[x]=num[x]/10;
                if (number==7)
                {
                    present=true;
                }
            }
        }
        
    }
    if ( present==true)
    {
        cout << "Boom!";
    }
    else 
    {
        cout << "There is no 7 in the array.";
    }
}