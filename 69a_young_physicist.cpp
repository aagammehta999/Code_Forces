#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    int crr[n];
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cin >> brr[i];
        cin >> crr[i];
        sumx = sumx + arr[i];
        sumy = sumy + brr[i];
        sumz = sumz + crr[i];
    }
    if (sumx == 0 && sumy == 0 && sumz == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, x, y, z, xsum(0), ysum(0), zsum(0);
//     cin >> n;

//     while (n--)
//     {
//         cin >> x >> y >> z;
//         xsum += x;
//         ysum += y;
//         zsum += z;
//     }

//     if (xsum == 0 && ysum == 0 && zsum == 0)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }