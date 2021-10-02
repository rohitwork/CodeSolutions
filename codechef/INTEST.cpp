#include <iostream>
using namespace std;
 
int main()
{
    long int n, k ;
    cin >> n >> k ;
    int t ,count = 0 ;
    
    for(int i = 0 ; i < n ; i++)
    {
        cin >> t ;
        if(t % k == 0)
            count++ ;
    }
    cout << count ;
    return 0 ;
} 