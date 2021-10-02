// https://codeforces.com/contest/1182/problem/A

#include<bits/stdc++.h>
#include<cmath>
using namespace std;

typedef long long ll;

ll power(ll a, ll n, ll mod)
{
	if(n == 0)
		return 1;

	ll small = power(a, n/2, mod);

	// small = (small * small) % mod;
	small = (small * small);

	if(n & 1)
		small = (small * a);
		// small = (small * a) % mod;

	// return small % mod;
	return small;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	unsigned long long n;
	cin >> n;

	if(n & 1)
	{
		cout << 0;
		return 0;
	}

	unsigned long long two = 2;
	// cout << pow(two, n/2);
	cout << power(2, n/2, 1000000007);

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
