// https://codeforces.com/contest/1139/problem/A

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

	char s[65005];
	int n;
	cin >> n;

	cin >> s;

	ll ans = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if((s[i] - '0') % 2 == 0)		// even digit
		{
			// that even digit adds the index of substring 
			// ex. for 1234
			// at 4
			// 1234, 234, 34, 4
			// are all even
			ans += (i + 1);
		}
	}

	cout << ans << '\n';
	
	return 0;
}
