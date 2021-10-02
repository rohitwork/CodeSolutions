#include <iostream>
using namespace std;
 
int main()
{
    int n ;
    float bal ;
    cin >> n ;
    cin >> bal ;
    if(n % 5 != 0)
    {
        bal = bal ;
    }
    else
    {
        if((n+0.5) <= bal)
        {
            bal = bal - n - 0.5 ;
        }
        else
        {
            bal = bal ;
        }
    }
    cout << bal ;
    return 0 ;
} 