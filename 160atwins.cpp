#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int suma = 0;
    int sumb = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        suma+=arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);
    suma=suma/2;
    for (int i = 0; i < n; i++)
    {
        sumb+=arr[i];
        count++;
        if (suma<sumb)
        {
            break;
        }
    
    }
    cout << count;
}