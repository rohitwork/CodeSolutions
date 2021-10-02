// https://codeforces.com/contest/1132/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> cost;
vector<ll> coupon;

void discounts(ll n, ll m)
{
	ll totalSum = 0;
	ll currentSum = 0;

	for(ll i = 0 ; i < n ; i++)
	{
		totalSum += cost[i];
	}

	for(ll i = 0 ; i < m ; i++)
	{
		ll c = coupon[i];
		cout << totalSum - cost[n - c] << '\n';
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n;
	cin >> n;

	for(ll i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		cost.push_back(x);
	}

	ll m;
	cin >> m;

	for(ll i = 0 ; i < m ; i++)
	{
		ll x;
		cin >> x;
		coupon.push_back(x);
	}


	sort(cost.begin(), cost.end());
	discounts(n, m);
	
	return 0;
}
