#include <bits/stdc++.h>
using namespace std ;
 
int main()
{
    int q ;
    cin >> q ;
    
    int n ;
    
    int count = 0 ;
    int x ;
    for(int i = 0 ; i < q ; i++)
    {
        //vector <int> v ;
        cin >> n ;
        count = 0 ;
 
        for(int j = 0 ; j < n ; j++)
        {
            cin >> x ;
            //v.push_back(x) ;
            if(x % 2 != 0)
            {
                count++ ;
            }
        }
 
        if ((n != 1) && (count % 2 != 0))
        {
            cout << "2" << endl ;
        }
        else
        {
            cout << "1" << endl ;
        }
    }
}