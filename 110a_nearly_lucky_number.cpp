#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    string str = to_string(n);
    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] != '4')
        {
            a = "NO";
        }
        if (str[i] == '7')
        {
            a = "NO";
        }
        // else if ( str[i] != '7')
        // {
        //     a="NO";
        // }
        else if (str[i] == '4' || str[i] == '7')
        {
            a = "YES";
        }
    }
    cout << a;
}