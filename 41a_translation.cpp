#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    string rev;
    reverse(s.begin(), s.end());
    if (s == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}