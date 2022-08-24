#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i%2 != 0 ) )
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        
    }
    
}