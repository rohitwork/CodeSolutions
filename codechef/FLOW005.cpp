#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int q, n ;
    cin >> q ;
    int notes = 0 ;
    for(int i = 1 ; i <= q ; i++)
    {
        cin >> n ;
        notes = 0 ;
        while(n >= 100)
        {
            notes++ ;
            n = n - 100 ;
        }
        while(n >= 50)
        {
            notes++ ;
            n = n - 50 ;
        }
        while(n >= 10)
        {
            notes++ ;
            n = n - 10 ;
        }
        while(n >= 5)
        {
            notes++ ;
            n = n - 5 ;
        }
        while(n >= 2)
        {
            notes++ ;
            n = n - 2 ;
        }
        while(n >= 1)   
        {
            notes++ ;
            n-= 1 ;
        }
        cout << notes << endl ;
    }
}
    