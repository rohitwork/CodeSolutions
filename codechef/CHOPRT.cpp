#include <bits/stdc++.h>
using namespace std ;
 
int main()
{
    int q ;
    cin >> q ;
    
    int a, b ;
    
    for(int i = 0 ; i < q ; i++)
    {
        cin >> a >> b ;
        if(a > b)
            cout << ">" << endl ;
        else if(a < b)
            cout << "<" << endl ;
        else
            cout << "=" << endl ;
    }
}