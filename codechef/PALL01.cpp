#include <bits/stdc++.h>
using namespace std ;
 
int prime(int n) ;
    
int main()
{
    int q ;
    cin >> q ;
    
    int n , p ;
    int rev ;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> n ;
        p = n ;
        rev = 0 ;
        while(p != 0)
        {
            rev = (rev * 10) + (p % 10) ;
            p /= 10 ;
        }
        if(rev == n)
            cout << "wins" << endl ;
        else
            cout << "losses" << endl ;
    }
}