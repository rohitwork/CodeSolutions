#include <bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n ;
    cin >> n ;
    
    int x ;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> x ;
        if(x < 10)
            cout << "What an obedient servant you are!\n" ;
        else 
            cout << -1 << "\n" ;
    }
    return 0 ;
} 