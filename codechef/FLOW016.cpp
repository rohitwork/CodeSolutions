#include <iostream>
using namespace std;
 
long long int gcdcalc(int a, int b);
 
int main() 
{
  int q;
  cin >> q;
  
  while(q--)
  {
        long long int a, b;
        cin >> a >> b;
      
        long long int gcd = gcdcalc(a,b);
        
        long long int lcm = (a * b) / gcd;
      
        cout << gcd << " " << lcm << endl;
  }
  return 0;
}
 
long long int gcdcalc(int a, int b)
{
    if(b == 0)
        return a;
    
    return gcdcalc(b, a%b);
}
 