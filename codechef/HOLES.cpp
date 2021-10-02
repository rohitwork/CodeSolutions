#include <bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n ;
    cin >> n ;
    
    string a;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a ;
        int j = 0, hole = 0 ;
        while(a[j] != '\0')
        {
            if(a[j] == 'A' || a[j] == 'D' || a[j] == 'O' || a[j] == 'P' || a[j] == 'Q' || a[j] == 'R')
                hole += 1 ;
            else if(a[j] == 'B')
                hole += 2 ;
            j++ ;
        }
        cout << hole << "\n" ;
    }
    
} 