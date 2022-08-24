#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=0;
    count=n/5; //check kara 5 kitni bar aayega 
    if (n % 5 > 0)  // jab tk remainder rahega 5 le chote mai se honge 
    {
        count++;
    }
    cout <<count;
}