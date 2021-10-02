#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int q , p ;
    int menu = 0 ;
    
    cin >> q ;
    
    for(int i = 0 ; i < q ; i++)
    {
        cin >> p ;
        menu = 0 ;
        for(int i = 12 ; i >= 1 ;i-- )
        {
            while(p >= pow(2,i-1))
            {
                menu++ ;
                p-= pow(2,i-1) ;
            }
        }
        cout << menu << endl ;
    }
} 