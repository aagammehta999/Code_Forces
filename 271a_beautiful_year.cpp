#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int y;
    cin >> y;
    string s = to_string(y + 1);
    // for (int i = 0; i < s.size(); i++)
    // {
    //     sort(s.begin(), s.end());
    //     if (s[i] != s[i + 1])
    //     {
    //         y=y+1;
    //     }
    //     else
    //     {   y=y+i;
    //         s = to_string(y);
    //     }
    // }
    while (true)
    {   y++;
        bool fun ;
        unique(s.begin(),s.end());
        /* code */
    }
    
    cout<<y;

}