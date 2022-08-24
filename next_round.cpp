#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int counta = 0;
    int countb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;
  for (int i = 0; i < k; i++)
  {
      if (arr[i] == 0)
      {
          cout<<i;
      }
      
  }
  for (int i = 0; i < n; i++)
  {
      
  }
  
    
    // while (arr[i] >= arr[k - 1] && arr[k - 1] != 0)
    // {
    //     if (arr[k - 1] != 0)
    //     {
    //         count++;
    //         i++;
    //     }
    //     else
    //     {
    //         for (int i = 0; i < k; i++)
    //         {
    //             if (arr[i] != 0)
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    // }

   // cout << count << endl;
}
