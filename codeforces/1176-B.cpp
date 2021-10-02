// https://codeforces.com/contest/1176/problem/B

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define pn printf("\n")
#define si(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
const int MOD = 1e9 + 7;

void wrapper()
{
	int n;
	cin >> n;

	ll a[101];

	int rem[3];
	fill(rem, rem + 3, 0);

	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];

		rem[a[i] % 3] += 1;
	}

	ll ans = 0;
	ans += rem[0];

	if(rem[1] > rem[2])
	{
		ans += rem[2];
		rem[1] -= rem[2];
		ans += (rem[1]) / 3;
	}
	else if(rem[1] < rem[2])
	{
		ans += rem[1];
		rem[2] -= rem[1];
		ans += (rem[2]) / 3;
	}
	else
	{
		ans += rem[2];
	}

	cout << ans << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	int t = 1;
	cin >> t;

	while(t--)
	{
		wrapper();
	}

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
