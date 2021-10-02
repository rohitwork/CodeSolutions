#include <bits/stdc++.h>
using namespace std ;
 
int prime(int n) ;
    
int main()
{
    int q ;
    cin >> q ;
    
    int n ;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> n ;
        int c = prime(n) ;
        if(c == 1)
        {
            cout << "yes" << endl ;
        }
        else
            cout << "no" << endl ;
    }
}
 
int prime(int n)
{
    for(int i = 2 ; i < n ; i++)
    {
        if(n % i == 0)
            return 0 ;
    }
    return 1 ;
}