// https://codeforces.com/contest/1111/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

vector<ll> power;
vector<ll> cumSum;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// n - number of superhero
	// k - max operation on one superhero
	// m - max operation allowed
	ll n, k, m;
	cin >> n >> k >> m;

	for(ll i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		power.pb(x);
	}

	sort(power.begin(), power.end());

	ll sum = 0;
	for(ll i = 0 ; i < n ; i++)
	{
		sum += power[i];
		cumSum.pb(sum);
	}

	// let us delete i superhero
	// remaining (n - i) superhero and (m - i) operations
	// so either give (m-i) operations or (k * (n-i)) operations
	// i.e give all reminaing superhero inc in power by k if remaining operations are large
	// minimum of these is allowed as max operations
	// range of i will be from 0 to min(m, n-1)
	// i.e on all superhero or m operations

	// when no superhero is removed
	long double finalAns = (long double)(cumSum[n - 1] + min(m, k * n));
	finalAns = finalAns / (n * 1.0);

	ll rangeI = min(m, n - 1);
	for(ll i = 1 ; i <= rangeI ; i++)
	{
		// largest (n - i) superhero (remaining superhero)
		ll largestN_ISuperheroRemaining = cumSum[n-1] - cumSum[i-1];
		long double ansForI = (long double)(largestN_ISuperheroRemaining + min(m - i, k * (n - i)));
		ansForI /= ((n - i) * 1.0);

		if(ansForI > finalAns)
		{
			finalAns = ansForI;
		}
	}

	cout << fixed << setprecision(15) << finalAns << "\n";
	
	return 0;
}