#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    int g=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i]; 
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=arr[i+1])
        {
            g++;
        }
    }
    
    cout<<g;
    
}