#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << count << endl;
        }
        else
        {
            j = b - a % b;
            cout << j << endl;
        }
    }
}