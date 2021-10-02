#include <bits/stdc++.h>
 
using namespace std;
 
int fact(int n) ;
 
int main()
{
    int q ;
    cin >> q ;
    int n ;
    
    for(int i = 0 ; i < q ; i++)
    {
        cin >> n ;
        int s = fact(n) ;
        cout << s << endl ;
    }
}
 
int fact(int n)
{
    int f = 1 ;
    for(int a = 2 ; a <= n ; a++)
    {
        f*= a ;
    }
    return f ;
} 