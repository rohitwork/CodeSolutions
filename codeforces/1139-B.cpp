// https://codeforces.com/contest/1139/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fr(i, a, b) for(ll i=a;i<b;i++)
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	
	ll choc[200005];
	ll n;
	cin >> n;
	fr(i, 0, n)
	{
		cin >> choc[i];
	}

	ll ans = 0;

	// add last
	ans += choc[n - 1];
	ll last = choc[n - 1];
	for(ll i = n - 2 ; i >= 0 ; i--)
	{
		ll newLast = min(last - 1, choc[i]);
		if(newLast > 0)
			last = newLast;
		else
			last = 0;
		ans += last;
	}

	cout << ans;

	return 0;
}
