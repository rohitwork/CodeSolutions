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
	
	int n;
	cin >> n;

	vector<int> v;

	for(int i = 0 ; i < n ; i++)
	{
		int x;
		cin >> x;
		v.pb(x);
	}

	sort(v.begin(), v.end());

	ll ans = 0LL;
	for(int i = 0 ; i < n / 2; i++)
	{
		ans += pow((v[i] + v[n - i - 1]), 2);
	}
	cout << ans << '\n';

	return 0;
}
