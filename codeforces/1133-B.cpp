#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;

	vector<int> candies(k);
	for(int i = 0 ; i < n ; i++)
	{
		int x;
		cin >> x;

		candies[x % k]++;
	}

	ll ans = 0;
	ans += candies[0] / 2;
	if(k % 2 == 0)
	{
		ans += candies[k / 2] / 2;
	}
	for(int i = 1 ; i < (k + 1) / 2 ; i++)
	{
		ans += min(candies[i], candies[k - i]);
	}
	
	cout << ans * 2 << '\n';

	return 0;
}
