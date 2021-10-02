#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q ;
    cin >> q ;
    int n ;    
    int sum = 0 ;
    for(int i = 0 ; i < q ; i++)
    {
        cin >> n ;
        sum = n%10 ;
        n = n/10 ;
        while(n != 0)
        {
            if(n/10 == 0)
            {
                sum += n ;
            }
            n = n/10 ;
        }
        cout << sum << endl ;
    }
}