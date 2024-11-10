#include <iostream>
using namespace std;
int n,i;
bool result(int );
int main()
{
    string word;
    cout << "Enter any string: ";
    cin >> word;
    for (i =0;word[i]!='\0';i++)
    {
       n++;
    }
    bool torf = result(n);
    cout << torf;
}
bool result(int n)
{
    bool status;
    if (n%2==0)
    {
        status = true;
    }
    else 
    {
        status=false;
    }
    return status;
}