#include <iostream>
using namespace std;
int main()
{
    int  n;
    cout << "How many numbers you want to enter: ";
    cin >> n;
    int x,z,num[n];
    cout << "Enter numbers: " << endl;
    for (x=0;x<n;x++)
    {
        cin >> num[x];
    }
    cout << "Enter number of times you want to perform even-odd transformation: ";
    cin >> z;
    for (int a=0;a<z;a++)
    {
       for (x=0;x<n;x++)
        {
            if (num[x]%2==0)
            {
                num[x]=num[x]-2;
            }
            else
            {
                num[x]=num[x]+2;
            }
        }
    }
     for (int i=0;i<n;i++)
    {
        cout << num[i] << endl;
    }
}