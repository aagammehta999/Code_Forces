#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int fun=0;
    for (int i = 1; i <= n; i++)
    {
        fun = fun + (i*pow((-1), i));
    }
    cout << fun;
}