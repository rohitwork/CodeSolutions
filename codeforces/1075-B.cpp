#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> isDriver; 
vector<ll> coordinates;

void taxiDrivers(ll n, ll m)
{
	vector<ll> drivers;
	vector<ll> ans(m + 2, 0);

	drivers.push_back(-1e10);
	for(ll i = 0 ; i< isDriver.size() ; i++)
	{
		if(isDriver[i] == 1)
		{
			drivers.push_back(coordinates[i]);
		}
	}
	drivers.push_back(1e10);
	
	sort(drivers.begin(), drivers.end());

	for(ll i = 0 ; i < coordinates.size() ; i++)
	{
		if(isDriver[i] == 0)
		{
			ll idx = lower_bound(drivers.begin() , drivers.end(), coordinates[i]) - drivers.begin();

			ll leftAns = coordinates[i] - drivers[idx - 1];
			ll rightAns = drivers[idx] - coordinates[i];

			if(leftAns <= rightAns)
			{
				ans[idx - 1]++;
			}
			else ans[idx]++;
		}
	}

	for(ll z = 1 ; z+1 < ans.size() ; z++)
	{
		cout << ans[z] << " ";
	}
}

int main()
{
	ll n, m;
	cin >> n >> m;

	for(ll i = 0 ; i < n + m ; i++)
	{
		ll x;
		cin >> x;
		coordinates.push_back(x);
	}

	for(ll i = 0 ; i < n + m ; i++)
	{
		int x;
		cin >> x;
		isDriver.push_back(x);
	}

	taxiDrivers(n, m);
	cout << endl;

	return 0;
}