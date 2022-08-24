#include <iostream>
using namespace std;
int main()
{
    int kost;
    int in_amount;
    int no_of_banana;
    int borrow;
    cin >> kost;
    cin >> in_amount;
    cin >> no_of_banana;
    int total_cost = 0;
    for (int i = 0; i < no_of_banana; i++)
    {
        total_cost += (i + 1) * kost;
    }
    if (total_cost > in_amount)
    {
        borrow = total_cost - in_amount;
        cout << borrow;
    }
    else
    {
        cout << 0;
    }
}