#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q ;
    cin >> q ;
    long int n ;
    int sum = 0 ;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> n ;
        sum = 0 ;
        while(n != 0 )
        {
            int r = n % 10 ;
            if( r == 4)
                sum++ ;
            n = n / 10 ;
        }
        cout << sum << endl ;
    }
} 