#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q ;
    cin >> q ;
    int n ;
    int rev = 0 ;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> n ;
        rev = 0 ;
        while(n != 0)
        {
            int r = n % 10 ;
            rev = (rev*10) + r ;
            n = n/10 ;
        }
        cout << rev << endl ;
    }
} 