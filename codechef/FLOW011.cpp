#include <bits/stdc++.h>
using namespace std ;
 
int main()
{
    int q ;
    cin >> q ;
    
    int sal ;
    double hra, da ;
    double gsal ;
    
    for(int i = 0 ; i < q; i++)
    {
        cin >> sal ;
        if(sal < 1500)
        {
            hra = 0.10 * sal ;
            da = 0.90 * sal ;
        }
        else
        {
            hra = 500 ;
            da = 0.98 * sal ;
        }
        gsal = sal + hra + da ;
        cout << gsal << endl ;
        
    }
}