#include <bits/stdc++.h>
using namespace std ;
 
int main()
{
    int q ;
    cin >> q ;
    
    char c ;
    
    for(int i = 0 ; i < q ; i++)
    {
        cin >> c ;
        if(c == 'B' || c == 'b')
            cout << "BattleShip" << endl ;
        else if(c == 'C' || c == 'c')
            cout << "Cruiser" << endl ;
        else if(c == 'D' || c == 'd')
            cout << "Destroyer" << endl ;
        else if(c == 'F' || c == 'f')
            cout << "Frigate" << endl ;
    }
}