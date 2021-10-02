// https://codeforces.com/contest/1114/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll x, y, z;
	cin >> x >> y >> z;

	ll a, b, c;
	cin >> a >> b >> c;

	if(a < x)
	{
		printf("NO\n");
		return 0;
	}

	// green garpes eaten by andrew
	a -= x;

	if(a + b < y)
	{
		printf("NO\n");
		return 0;
	}

	// y grapes eaten by dmitry
	if(a < y)
	{
		y = y - a;
		a = 0;
		b = b - y;
	}
	else
	{
		a -= y;
	}

	if(a + b + c >= z)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}