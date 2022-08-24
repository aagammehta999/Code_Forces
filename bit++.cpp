#include<iostream> 
using namespace std;
int main()
{
    int n;
    string s;
    int count = 0;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s=="++X" || s=="X++")
        {
            count++;
        }
        if (s=="--X" || s=="X--")
        {
            count--;
        }
        
    }
    cout<<count<<endl;
    return 0;
    
}