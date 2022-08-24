#include <iostream>
using namespace std;
int main()
{
    int m, n, a;
    cin >> m >> n >> a;
    //int count = 0;
    int square = m * n;
    int sq = 0;
    int count = 1;

    do
    {   sq=a*a;
        a++;
        count++;
    } while (a>m && a>n);
    
    // do
    // {
    //     count++;
    // } while (square <= sq * count);

    cout << count;
}