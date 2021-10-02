// https://codeforces.com/contest/1138/problem/A

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

	int n;
	cin >> n;

	int a[100005];
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}

	int ans = 0;
	for(int i = 0 ; i < n ; i++)
	{
		int type1 = 0;
		int type2 = 0;

		int j;
		// count type1 sushi
		for(j = i ; j < n ; j++)
		{
			if(a[i] == a[j])
			{
				type1++;
			}
			else
			{
				break;
			}
		}
		// count type2 sushi
		for(int k = j ; k < n ; k++)
		{
			if(a[j] == a[k])
			{
				type2++;
			}
			else
			{
				break;
			}
		}

		// whatever is max
		int localAns = min(type1, type2);
		ans = max(ans, 2 * localAns);

		// move i to second type
		// i.e skip the first type
		i = j;
        i--;        // for loop incrementation balance
	}

	cout << ans << "\n";
	
	return 0;
}
