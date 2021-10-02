// https://codeforces.com/problemset/problem/1004/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	ll a[105];
	int n, d;
	cin >> n >> d;

	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}

	int ans = 2; 			// first and last
	for(int i = 1 ; i < n ; i++)
	{
		int diff = a[i] - a[i-1];
		if(diff == (2 * d))
		{
			ans++;
		}
		else if(diff > (2 * d))
		{
			ans += 2;
		}
	}

	cout << ans << endl;

	return 0;
}
