#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == "Tetrahedron")
        {
            count += 4;
        }
        else if (a == "Cube")
        {
            count += 6;
        }
        else if (a == "Octahedron")
        {
            count += 8;
        }
        else if (a == "Dodecahedron")
        {
            count += 12;
        }
        else if (a == "Icosahedron")
        {
            count += 20;
        }
    }
    cout << count;
}