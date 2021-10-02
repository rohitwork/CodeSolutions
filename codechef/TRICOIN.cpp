#include <iostream>
using namespace std;
 
int main() 
{
    int q ;
    cin >> q ;
    
    int x ;
    
    for(int i = 0 ; i < q ; i++)
    {
        cin >> x ;
        int j = 1 ;
        int tile = 0 ;
        
        while(tile+j <= x)
        {
            tile = tile + j ;
            j++ ;
        }
        cout << --j << endl ;
    }
} 