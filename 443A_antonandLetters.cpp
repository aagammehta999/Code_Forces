#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    set<char> ss;
    for (int i = 0; i < s.size(); i++)
    {
        /* code */
        if (s[i] == ',' || s[i] == ' ' || s[i] == '{' || s[i] == '}')
        {
            int count = 0;
        }
        else
        {
            ss.insert(s[i]);
        }
    }
    cout << ss.size();
}