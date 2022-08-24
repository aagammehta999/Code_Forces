#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int n;
    cin >> n;
    int a = 0, b = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if (a > b)
    {
        cout << "Anton";
    }
    else if (b > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}