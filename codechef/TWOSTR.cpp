#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin >> q ;
    
    
    string a, b;
    while(q--)
    {
        cin >> a >> b;
        
        int l1 = a.length();
        int l2 = b.length();
        
        
        if(l1 != l2)
        {
            cout << "No" << endl;
            continue;
        }
        
        
        int i = 0 ;
        while(i < l1)
        {
            if(a[i] == b[i] || a[i] == '?' || b[i] == '?')
            {
                i++;
            }
            else
            {
                cout << "No" << endl;
                break;
            }
        }
        if(i == l1)
        {
            cout << "Yes" << endl;
        }
    }
}
 