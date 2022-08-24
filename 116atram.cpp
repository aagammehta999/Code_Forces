#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    int ans[n];
    int inside = 0;
    int final = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        inside -= a[i];
        inside += b[i];
        ans[i] = inside;
    }
    sort(ans, ans + n, greater<int>());
    //sort(ans[0], n);
    final = ans[0];
    cout << final;
}