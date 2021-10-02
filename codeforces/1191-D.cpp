// https://codeforces.com/contest/1191/problem/D

/**
Unless the first player must lose after the first move, 
the numbers of stones in these piles should form a permutation 
obtained from 0 to (n−1) in the end, in order to ensure that there 
are no two piles include the same number of stones.

Let's use cnt[x] to represent the number of piles which have 
exactly x stones in the beginning. 
There are four cases that Tokitsukaze will lose after the first move:

## Moves when Tokitsukaze (first player will lose in first move)

# (cannot dec zero so they will be same)
cnt[0] > 1				

# (dec one and other two would still be same)
cnt[x] > 2 for some x

# (atleast one of them would still remain with same value)
cnt[x] > 1 and cnt[y] > 1 for some x, y (x ≠ y)

# (if decrease x it becomes equal to x-1)
cnt[x] > 1 and cnt[x−1] > 0 for some x.


If Tokitsukaze won't lose after the first move, 
then we only need to check the parity of the total number of 
stones that can be taken.

By the way, if you don't want to discuss the above four cases, 
you can just enumerate her first move.

*/

#include<bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp> 
// using boost::multiprecision::cpp_int;
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define pn printf("\n")
#define si(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
const int MOD = 1e9 + 7;

// Print 
// "sjfnb" (without quotes) if Tokitsukaze will win, or 
// "cslnb" (without quotes) if CSL will win.

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	int n;
	cin >> n;

	// (number, count)
	map<ll, ll> m;

	ll a[n];

	bool TokitsukazeLose = false;
	int twoCount = 0; 			// numbers which appears two times
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
		m[a[i]]++;

		if(m[a[i]] >= 3)
			TokitsukazeLose = true;

		if(m[a[i]] == 2)
			twoCount++;
	}

	if(twoCount >= 2)		// if >=2 numbers who appear more than two times
		TokitsukazeLose = true;

	if(TokitsukazeLose)
	{
		cout << "cslnb\n";
		return 0;
	}

	for(auto it: m)
	{
		if(it.S == 2)
		{
			if(it.F == 0)
				TokitsukazeLose = true;		// 0 appears 2 times

			if(m[it.F - 1] != 0)	// Case 4
				TokitsukazeLose = true;
		}
	}

	if(TokitsukazeLose)
	{
		cout << "cslnb\n";
		return 0;
	}

	sort(a, a + n);

	// check the parity of the total number of stones that can be taken
	ll s = 0;
	for(int i = 0 ; i < n ; i++)
	{
		s += a[i] - i;
	}

	if(s % 2 == 0)
		cout << "cslnb\n";
	else
		cout << "sjfnb\n";


	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
