// https://codeforces.com/contest/1174/problem/C

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
const int MOD = 1e9 + 7;

int a[100005];

void sieve(ll n)
{
	fill(a, a + n + 1, 0);

	for(ll i = 2 ; i <= n ; i += 2)
		a[i] = 1;

	int x = 2;
	for(ll i = 3 ; i <= n ; i += 2)
	{
		if(a[i] == 0)
		{
			a[i] = x;
			for(ll j = i * i ; j <= n ; j += i)
			{
				if(a[j] == 0)
					a[j] = x;
			}
			++x;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	int n;
	cin >> n;

	sieve(n);

	for(int i = 2 ; i <= n ; i++)
		cout << a[i] << " ";

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
