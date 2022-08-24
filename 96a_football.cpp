// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int c = 1;
//     for (int i = 1; i <= s.length(); i++)
//     {
//         if (s[i] == s[i - 1])
//         {
//             c++;
//             if (c == 7)
//             {
//                 cout << "YES";
//                 return 0;
//             }
//         }
//         else
//         {
//             c = 1;
//         }
//     }
//     cout << "NO";
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
if(s.find("0000000")<100||s.find("1111111")<100){
cout<<"YES";
return 0;
}
cout<<"NO";
return 0;
}