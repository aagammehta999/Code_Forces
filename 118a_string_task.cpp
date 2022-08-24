#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    
    for (int i = 0; i < s.size(); i++)
    {   s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i]=='y')
        {
            c=1;
        }
        else
        {
            cout <<'.'<< s[i] ;
        }
    }
}