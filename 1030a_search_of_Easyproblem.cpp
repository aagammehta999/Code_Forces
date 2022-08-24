#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tough=0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            tough = 1;
        }
    }
    if (tough == 1)
    {
        cout << "HARD";
    }
    else
    {
        cout << "EASY";
    }
}