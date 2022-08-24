#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (lower >= upper)
        {
            s[i] = tolower(s[i]);
        }
        else
        {
            s[i] = toupper(s[i]);
        }
    }
    cout<<s;
}