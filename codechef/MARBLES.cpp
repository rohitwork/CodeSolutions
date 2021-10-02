/*
 
Help :
 
This is a problem of "combinations with repetitions", also known as the "stars and bars problem". 
The number of ways of making ss selections from among r distinguishable possibilities, where the order does not matter and repetitions are allowed is
(r+sâ��1 C s) = ((r+sâ��1)!) / (s! (râ��1)!)
Math is Fun provides a nice explanation for the above formula.  
Plugging in Nâ��K for s and K for r, we get
(k+n-k-1 C n-k)=(n-1 C n-k) = (n-1 C k-1)
 
Maths is Fun : https://www.mathsisfun.com/combinatorics/combinations-permutations.html
 
Comments :
n marbles he wants 
k diff color marbles
and he wants atleast one of all marbles (k <= n)
so he will take "k" marbles of diff colors for sure (probability = 1)
so remaining "n - k" marbles he needs to take out of remaining k diff color marbles 
so we find the number of ways 
"n - k" marbles can be choosen with "k" diff colored marbles 
*/
 
 
#include <iostream>
using namespace std;
 
#define ll long long
 
ll combination(ll n, ll r);
 
int main() 
{
    int t;
    cin >> t;
 
    ll n, k;
    while(t--)
    {
        cin >> n >> k;
 
        ll ans = combination(n - 1, k - 1);
        cout << ans << endl;
    }
}
 
ll combination(ll n, ll r)
{
    ll res = 1;
    
    if(r > n / 2)
    {
        r = n - r;
    }
 
    for(ll i = 0 ; i < r ; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
 
    return res;
} 