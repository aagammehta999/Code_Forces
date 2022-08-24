#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    string s;
    int i = 0;
    cin>>s;
    while(t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
        // t--;
    }
    cout<<s;

    // for (int t=0;t>0;t--)
    // {
    //     if (s[i]=='B' && s[i+1]=='G')
    //     {
    //         swap(s[i],s[i+1]);
    //     }

    //     i++;
    // }
}