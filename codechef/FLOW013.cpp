#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int q ;
    cin >> q ;
    
    int a, b, c ;
    for(int i = 1 ; i <= q ; i++)
    {
        cin >> a >> b >> c ;
        if(a == 0 || b == 0 || c == 0)
        {
            cout << "NO" << endl ;
            continue ;
        }
        else
        {
            if((a+b+c) == 180)
            {
                cout << "YES" << endl ;
            }
            else
                cout << "NO" << endl ;
        }
    }
}
  