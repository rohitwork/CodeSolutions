#include <bits/stdc++.h>
using namespace std;
    
#define ll long long
     
int main()
{
     int q;
     cin >> q ;
        
     int n ;
     for(int i = 0 ; i < q ; i++)
     {
        cin >> n ;
            
        ll a[n][n];
            
        for(int x = 0 ; x < n ; x++)
        {
            for(int y = 0 ; y < n ; y++)
            {
                cin >> a[x][y] ;
            }
        }
            
        for(int x = 0 ; x < n ; x++)
        {
            sort(a[x],a[x]+n);
        }
                
        int f=0;
        ll sum = a[n-1][n-1] ;
        ll max=a[n-1][n-1];
            
        for(int x = n-2 ; x>=0 ; x--)
        {
          f=0;
          for(int y=n-1;y>=0;y--)
          {
            if(max > a[x][y])
            {
              f=1;
              sum = sum + a[x][y];
              max = a[x][y];
              break;
            }
          }
          if(f==0)
          {
              cout<<"-1\n";
              break;
          }    
        }
        if(n==1)
          cout << sum << "\n";
       else if(f == 1 && n!= 1)
       {
         cout << sum << endl ;
       }
    }
}  