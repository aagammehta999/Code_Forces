#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int a, b;
    int count = 0;
    //time limit exceeded
    // while (n--)
    // {
    //     cin >> t;
    //     a = ((t / 2) + 1);
    //     b = t - a;
    // }
    // while (n--)
    // {
    //     if (a < t)
    //     {
    //         a++;
    //         count++;
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

        if (arr[i]==1 || arr[i]==2)
        {
            cout<<0<<endl;
        }
        else{
            cout<<(arr[i]-1)/2<<endl;
        }
        
    }
    
}