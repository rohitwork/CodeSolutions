// https://codeforces.com/contest/1176/problem/C

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

int visit = 0;
bool yeah[100005];

// Required Series (In order)
// {4, 8, 15, 16, 23, 42};

// int x[] = {4, 8, 15, 16, 23, 42};

void wrapper()
{
	ll n;
	cin >> n;

	if(n < 6)
	{
		cout << n;
		return;
	}

	int a[500005];
	// srand(time(NULL));\

	int n4 = 0, n8 = 0, n15 = 0, n16 = 0, n23 = 0, n42 = 0;
	for(ll i = 0 ; i < n ; i++)
	{
		cin >> a[i];
		// int xx = rand() % 6;
		// a[i] = x[xx];

		if(a[i] == 4)
			n4++;
		else if(a[i] == 8 && n8 < n4)
			n8++;
		else if(a[i] == 15 && n15 < n8)
			n15++;
		else if(a[i] == 16 && n16 < n15)
			n16++;
		else if(a[i] == 23 && n23 < n16)
			n23++;
		else if(a[i] == 42 && n42 < n23)
			n42++;
	}

	int ans = min(n4, min(n8, min(n15, min(n16, min(n23, n42)))));

	cout << n - (6 * ans) << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	int t = 1;
	// cin >> t;

	while(t--)
	{
		wrapper();
	}

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
