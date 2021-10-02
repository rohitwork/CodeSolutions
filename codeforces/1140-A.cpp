// https://codeforces.com/contest/1140/problem/A

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

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	ll n;
	cin >> n;

	ll a[100005];

	ll ans = 0;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> a[i];
	}
	
	for(int i = 1 ; i <= n ; i++)
	{
		if(a[i] == i)
		{
			ans++;
		}
		else if(a[i] > i)
		{
			int max = a[i];
            int j;
            for(j = i + 1 ; j <= max && j <= n ; j++)
			{
				if(a[j] > max)
				{
					max = a[j];
				}
			}
			i = j - 2;
		}
	}

	cout << ans << '\n';

	return 0;
}