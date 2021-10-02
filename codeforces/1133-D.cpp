#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void normalizeFraction(pair<ll, ll> &f)
{
    if(f.first < 0)					// (1/-2) and (-1/2)
	{
		f.first *= -1;
		f.second *= -1;
	}
	else if (f.first == 0 && f.second < 0)		// (0/-2) and (0/2)
	{
		f.second *= -1;
	}
	ll d = __gcd(abs(f.first), abs(f.second));
	f.first = f.first / d;
	f.second = f.second / d;
}

ll maxZeroQuantization(vector<ll> a, vector<ll> b, ll n)
{
	map<pair<ll, ll>, ll> m;

	ll count = 0;
	ll ans = 0;
	for(ll i = 0 ; i < n ; i++)
	{
		if(a[i] == 0)
		{
			if(b[i] == 0)
			{
				count++;
			}
		}
		else
		{
			pair<ll, ll> f = make_pair(-b[i], a[i]);
			normalizeFraction(f);
			m[f]++;
			ans = max(ans, m[f]);
		}
	}
	return (count + ans);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n;
	cin >> n;

	vector<ll> a;
	vector<ll> b;


	for(ll i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		a.push_back(x);
	}

	for(ll i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		b.push_back(x);
	}

	cout << maxZeroQuantization(a, b, n);
	
	return 0;
}
