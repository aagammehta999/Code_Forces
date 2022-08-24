#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p, q;
    int b = 0, a = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (p > q)
        {
            a++;
        }
        else if (p < q)
        {
            b++;
        }
    }
    if (a > b)
    {
        cout << "Mishka";
    }
    else if (a < b)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
}