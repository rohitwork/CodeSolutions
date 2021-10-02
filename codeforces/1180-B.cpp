// https://codeforces.com/contest/1180/problem/B

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

const int N = 1e6 + 2;
ll a[N];

void wrapper()
{
	int n;
	cin >> n;

	int posCount = 0, negCount = 0, zeroCunt = 0;

	for(int i = 0 ; i < n ; i++)
	{
		cin >> a[i];

		if(a[i] >= 0)
			a[i] = -a[i] - 1;
	}
	
	if(n & 1)
	{
		int idx = min_element(a, a + n) - a;
		a[idx] = -a[idx] - 1;
	}

	for(int i = 0 ; i < n ; i++)
		cout << a[i] << " ";

	return;
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
