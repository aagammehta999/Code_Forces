#include <iostream>
using namespace std;

int main()
{
    int n;
    int pen, ven, ban;
    int number = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> pen >> ven >> ban;
        if (pen + ven + ban >= 2)
        {
            number++;
        }
    }

    cout << number << endl;

    return 0;
}