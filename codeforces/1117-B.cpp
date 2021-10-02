// https://codeforces.com/contest/1117/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(c) (c).begin(), (c).end()


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, m, k;
	cin >> n >> m >> k;

	vector<ll> v;
	for(ll i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		v.pb(x);
	}

	sort(all(v));
	
	// (k+1) ki cycles bni 
	// k time max and 1 time second max
	ll eachCycleSum = (k * v[n - 1]) + v[n - 2];
	ll cycles = m / (k + 1);

	// remaining me max use krlege
	ll remaining = m % (k + 1);
	remaining *= v[n - 1];

	cout << (cycles * eachCycleSum) + remaining << '\n';

	return 0;
}

