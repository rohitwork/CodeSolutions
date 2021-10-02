// https://codeforces.com/problemset/problem/1114/B
// Editorial: https://codeforces.com/blog/entry/65136

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)

ll n, m, k;
vector<pll> v;

void partitioningTask()
{
	// sort in descending order
	sort(all(v), greater<pii>());

	// indices of largest m * k elements
	vector<int> indices(m * k);

	// largest m * k elements are included in beauty of subarray
	ll sumBeauty = 0;
	for(ll i = 0 ; i < (m * k) ; i++)
	{
		sumBeauty += v[i].first;
		indices[i] = v[i].second;
	}

	cout << sumBeauty << '\n';

	sort(all(indices));
	// k-1 partitions of these m * k elements 
	// with m elements in each subaaray
	for(int i = 0 ; i < k - 1 ; i++)
	{
		cout << indices[(i + 1) * m - 1] + 1 << " ";
	}

	return;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	cin >> n >> m >> k;

	for(int i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		v.pb(mp(x, i));
	}

	partitioningTask();	
	return 0;
}