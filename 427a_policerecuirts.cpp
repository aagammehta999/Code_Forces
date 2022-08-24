#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int total = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            total += arr[i];
        }
        else if (total > 0)
        {
            total--;
        }
        else
        {
            count++;
        }
    }
    cout << count;
}