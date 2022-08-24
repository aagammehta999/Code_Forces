#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int len = arr[i].length();
        char end = arr[i].back();
        char start = arr[i].front();
        if (len > 10)
        {
            cout << start 
                 << len-2 
                 << end << endl;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }
}