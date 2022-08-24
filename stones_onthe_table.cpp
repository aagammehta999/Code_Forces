#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    cin>>s;
    int i, count = 0;
    for (int i = 0; i < n; i++)
    {
        // if (s[i] != s[i + 1])
        // {
        //      break;
        // }
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    // do
    // {
    //     count++;
    // } while (s[i] != s[i + 1]);
     cout << count;
}