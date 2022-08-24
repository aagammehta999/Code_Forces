#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int tt = k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (tt < 240)
        {
            tt += (i + 1) * 5;
            count++;
        }
    }
    if (tt <= 240)
    {
        cout << count;
    }
    else
    {
        cout << count - 1;
    }
}