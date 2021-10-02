#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int q ;
    cin >> q ;
    
    int a, b ;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> a >> b ;
        int c = (a > b) ? a : b ;
        cout << c << " " << a+b << endl ;
    }
}
     
     