// https://codeforces.com/problemset/problem/1121/A
// Technogoblet of Fire

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

	int n, m, k;
	cin >> n >> m >> k;

	int a[101];
	int b[101];

	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++)
	{
		cin >> b[i];
	}

	int ans = 0;
	while(k--)
	{
		int id;
		cin >> id;

		int idx = id - 1;
		int power = a[idx];
		int school = b[idx];

		for(int i = 0 ; i < n ; i++)
		{
			if(b[i] == school)
			{
				if((i != idx) && (a[i] > power))
				{
					ans++;
					break;
				}
			}
		}
	}

	cout << ans << '\n';
	
	return 0;
}