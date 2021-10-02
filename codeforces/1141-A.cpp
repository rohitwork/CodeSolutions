// https://codeforces.com/contest/1141/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

ll steps(ll n, ll m)
{
	if(n == m)
	{
		return 0;
	}
	if(n > m)
	{
		return -1;
	}

	ll one = steps(2 * n, m);
	ll two = steps(3 * n, m);

	if(one != -1 && two != -1)
	{
		return min(one, two) + 1;
	}
	else if(one != -1)
	{
		return one + 1;
	}
	else if(two != -1)
	{
		return two + 1;
	}
	else
		return -1;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, m;
	cin >> n >> m;

	cout << steps(n, m);

	return 0;
}