#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.find('hello'))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}