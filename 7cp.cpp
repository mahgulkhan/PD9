#include <iostream>
using namespace std;
int found(string,string);
int main()
{
    string s1,s2;
    cout << "Enter a string: ";
    cin >> s1;
    cout << "Enter another string: ";
    cin >> s2;
    int output=found(s1,s2);
    cout << "String have "<<output<< " common characters ";
}
int found(string s1,string s2)
{
    int rep=0;
    for (int x=0;s1[x]!='\0';x++)
    {
        for (int y=0;s2[y]!='\0';y++)
        {
            if (s1[x]==s2[y])
            {
                rep++;
                s2[y]=238;
            }
        }
    }
    return rep;
}
