#include <iostream>
using namespace std;
int change(int,int);
int main()
{
    int n,i,count;
    cout << "Enter desired number of colors: ";
    cin >> n;
    cout << "Enter colors: " <<endl;
    string colors[n];
    for (i=0;i<n;i++)
    {
        cin >> colors[i];
    }
    for (int z=0;z<n;z++)
    {
        if (colors[z]!=colors[z-1])
        {
            count++;
        }
    }
    
    int result=change(count,n);
    cout << result << " s";
}
int change(int count,int n)
{
    int time;
    for (int x=0;x<count;x++)
    {
        time=n*2;
        time=time+(count-1);
    }
    return time;
}