#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    set<char> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        s.insert(tolower(c));
    }
    if (s.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}