#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = 0;
    int a[n];
    int min, max;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    min = *min_element(a, a + n);
    max = *max_element(a, a + n);
    int j = 0;

    while (a[j] != max && a[n - 1] != min)
    {
        swap(a[j], a[j + 1]);
        swap(a[n - 1], a[n - 1 - j]);
        j++;
        t++;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[i] < a[j])
    //         {
    //             swap(a[i], a[j]);
    //             i++;
    //             t++;
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout<<t;
}