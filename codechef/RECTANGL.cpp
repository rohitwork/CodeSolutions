#include<iostream>
using namespace std;
 
int main()
{
  int q ;
  cin >> q ;
 
  for(int t = 0 ; t < q ; t++)
  {
    vector <int> v ;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);
    
    sort(v.begin(), v.end());
    
    if((v[0]==v[1]) && (v[2]==v[3]))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }
    
  
} 