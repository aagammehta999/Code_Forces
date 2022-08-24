#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[250];
    int a;
    int b;
    int count=0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    for (int i = a; i < a + b; i++)
    {
        cin >> arr[i];

    }
    sort(arr, arr + (a + b));
    for (int i = 0; i < a + b; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count++;
        }
    }
    if (n == (count))
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
