// https://codeforces.com/contest/1180/problem/C

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
	int n, q;
	cin >> n >> q;

	deque<ll> v;

	ll maxElement = LONG_MIN;
	for(int i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;

		v.pb(x);

		maxElement = max(maxElement, x);
	}
	// cout << maxElement << endl;

	if(q == 0)		
	{
		// it needs to be here
		// cuz in one of the TC
		// queries = 0
		// and in the later part of the code
		// i'm trying to get m[0]
		// which doesnt exists
		// so this
		return;
	}

	vector<ull> m;
	for(int i = 0 ; i < q ; i++)
	{
		ull x;
		cin >> x;

		m.pb(x);
	}

	// cout << "\nQueue: ";
	// deque<ll>::iterator it;
	// for(it = v.begin() ; it != v.end() ; it++)
	// {
	// 	cout << *it << " ";
	// }
	// cout << endl;

	int i = 0;
	int query = 1;

	vector<pll> startAns;

	while(v.front() != maxElement)
	{
		ll a = v.front();
		v.pop_front();
		ll b = v.front();
		v.pop_front();

		startAns.pb(mp(a, b));

		if(m[i] == query)
		{
			cout << a << " " << b << "\n";
			i++;
		}

		if(a < b)
			swap(a, b);

		v.push_front(a);
		v.push_back(b);

		query++;
	}

	int initialQueuries = startAns.size();
	for(int x = i ; x < q ; x++)
	{
		// cout << m[x] << " ";

		if(m[x] <= initialQueuries)
		{
			cout << startAns[m[x] - 1].F << " " << startAns[m[x] - 1].S << "\n";
			continue;
		}

		ull indx = m[x] - (query - 1);
		indx = indx % (n - 1);

		if(indx == 0)
		{
			cout << v[0] << " " << v[n - 1] << "\n";
		}
		else
		{
			cout << v[0] << " " << v[indx] << "\n";
		}
	}

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
