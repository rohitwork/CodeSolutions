#include <bits/stdc++.h>
using namespace std;

#define ll long long

string kingsRace(ll n, ll x, ll y)
{
	ll w = (x - 1) + (y - 1);
	ll b = (n - x) + (n - y);

	if(w > b)
	{
		return "Black";
	}
	return "White";
}

int main()
{
	ll n;
	cin >> n;

	ll x, y;
	cin >> x >> y;

	cout << kingsRace(n, x, y) << endl;
	return 0;
}