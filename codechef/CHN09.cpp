#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  string s;
  int t ;
  cin >> t ;
 
  while(t--)
  {
    cin >> s;
    int l = s.length();
    int a=0, b = 0;
    for(int i = 0 ; i < l ; i++)
    {
      if(s[i] == 'a')
      {
        a++;
      }
      else
      {
        b++;
      }
    }
 
    if(a<b)
    {
      cout << a << "\n";
    }
    else
    {
      cout << b << "\n";
    }
  }
  return 0;
} 