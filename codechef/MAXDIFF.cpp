// Maximum Weight Difference
// Foundation Level Mock Test #1

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
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
	int n, k;
	cin >> n >> k;


	vi a;
	for(int i = 0 ; i < n ; i++)
	{
		int x;
		cin >> x;

		a.pb(x);
	}

	sort(all(a));

	// choose smallest k items for son
	k = min(k, n - k);

	ll son = 0;
	ll father = 0;

	for(int i = 0 ; i < n ; i++)
	{
		if(i < k)
			son += a[i];
		else
			father += a[i];
	}

	cout << abs(father - son) << "\n";
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
