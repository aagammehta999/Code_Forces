#include <iostream>
#include <string>
using namespace std;
int main()
{
    string x, y;
    int count;
    int final;
    cin >> x >> y;
    for (int i = 0; i < x.size(); i++)
    {
        if (islower(x[i]))
        {
            x[i] = toupper(x[i]);
        }
    }
      for (int i = 0; i < y.size(); i++)
    {
        if (islower(y[i]))
        {
            y[i] = toupper(y[i]);
        }
    }


    count = x.compare(y);
    if (count != 0)
    {

        if (count > 0)
        {
            final = 1;
        }
        else if (count < 0)
        {
            final = -1;
        }
    }
    else
    {
        final = 0;
    }
    cout << count << endl;
    cout << final;
    return 0;
}
