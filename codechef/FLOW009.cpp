#include <bits/stdc++.h>
using namespace std ;
 
int main()
{
    int q ;
    cin >> q;
    
    int a, b ;
    
    for(int i = 0 ; i < q ; i++)
    {
        cin >> a >> b ;
        double total = a * b ;
        
        if(a > 1000)
        {
            total = 0.90 * total ;
        }
        
        printf("%lf\n", total) ;
        
    }
}