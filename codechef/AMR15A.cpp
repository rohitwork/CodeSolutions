#include <bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n ;
    cin >> n ;
    
    int odd = 0, even = 0 ;
    int a ;
    
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a ;
        if(a % 2 == 0)
            even++ ;
        else
            odd++ ;
    }
    if(even > odd)
        cout << "READY FOR BATTLE" << endl ;
    else
        cout << "NOT READY" << endl ;
}