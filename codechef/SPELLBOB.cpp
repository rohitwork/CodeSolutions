#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
bool spellBob(char a[], char b[])
{
	if(a[0] == 'b' || b[0] == 'b')
    {
        if(a[1] == 'b' || b[1] == 'b')
        {
            if(a[2] == 'o' || b[2] == 'o')
            {
                return true;
            }
        }
 
        if(a[1] == 'o' || b[1] == 'o')
        {
            if(a[2] == 'b' || b[2] == 'b')
            {
                return true;
            }
        }
    }
 
    if(a[0] == 'o' || b[0] == 'o')
    {
        if(a[1] == 'b' || b[1] == 'b')
        {
            if(a[2] == 'b' || b[2] == 'b')
            {
                return true;
            }
        }
    }
 
    return false;
}
 
int main() 
{
	ll t;
	cin >> t;
 
	while(t--)
	{
		char a[3], b[3];
		cin >> a >> b;
		
        if(spellBob(a, b) == true)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
	}
 
	return 0;
}