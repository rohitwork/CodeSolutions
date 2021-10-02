// https://codeforces.com/contest/1095/problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solve(ll a[], ll n)
{
	ll l = a[n - 1];
	ll s = a[0];

	if(l - a[1] < a[n - 2] - s)
	{
		return l - a[1];
	}
	else
		return a[n - 2] - s;
}

int main()
{
	ll n;
	cin >> n;

	ll a[100005];

	if(n == 2)
	{
		cout << 0;
		return 0;
	}
	for(ll i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);	

	cout << solve(a, n);
	return 0;
}