#include <iostream>
using namespace std;
bool same(string element[4]);
int main()
{
    string elements[4];
    int i;
    cout << "Enter input of your choice: " << endl;
    for (i=0;i<4;i++)
    {
        cin >> elements[i];
    }
    bool result= same(elements);
    cout << result;
}
bool same(string elements[4])
{
    bool output;
    if (elements[0]==elements[1] && elements[1]==elements[2] && elements[2]==elements[3] )
    {
        output=true;
    }
    else 
    {
        output=false;
    }
    return output;
}