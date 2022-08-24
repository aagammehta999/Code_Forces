#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    if (a > b)
        swap(a, b);
    b = (b - a) / 2;
    cout << a << " " << b << endl;
    if (a < b)
    {
        swap(a, b);
        a = (a - b) / 2;
        cout << b << " " << a << endl;
    }

    // time limit exceed
    //  int fashion = 0;
    //  int normal = 0;
    //  while (a-- && b--)
    //  {
    //      fashion++;
    //  }
    //  while (a--)
    //  {
    //      normal++;
    //  }
    //  while (b--)
    //  {
    //      normal++;
    //  }
    //  cout << fashion << " " << normal;
}
