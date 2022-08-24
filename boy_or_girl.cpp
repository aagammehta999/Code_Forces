#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    int a=0;
    cin >> s;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] != s[i + 1])

        {
            a++;
        }
       
    }

    if (a % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}