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
#define tra(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
const int MOD = 1e9 + 7;

void wrapper()
{
	int n;
	cin >> n;

	vll v;
	for(int i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		v.pb(x);
	}

	sort(all(v));

	int ss = v.size();

	bool x = true;
	for(int i = 0 ; i < n - 1 ; i++)
	{
		int prev = (i - 1 + n) % n;
		int next = (i + 1) % n;

		if(v[i] >= v[prev] + v[next])
		{
			x = false;
			break;
		}
	}
	
	// cout << "n-1\n";
	

	if(x)
	{
		if(v[ss - 1] >= v[ss - 2] + v[0])
		{
			swap(v[ss - 1], v[ss - 2]);
			int i = ss - 2;

			int prev = (i - 1 + n) % n;
			int next = (i + 1) % n;

			while(i > 0 && v[i] >= v[prev] + v[next])
			{
				// for(int i = 0 ; i < v.size() ; i++)
				// 	cout << v[i] << " ";
				// cout << "\n";
				
				i--;
				swap(v[i], v[i + 1]);

				prev = (i - 1 + n) % n;
				next = (i + 1) % n;
			}
			
			// for(int i = 0 ; i < v.size() ; i++)
			// 	cout << v[i] << " ";
			// cout << "\n";

			if(i == 0)
			{
				if(v[0] >= v[1] + v[n - 1])
				{
					x = false;
				}
			}
//				x = false;
		}
	}

	if(x)
	{
		cout << "YES\n";
		for(int i = 0 ; i < v.size() ; i++)
			cout << v[i] << " ";
		cout << "\n";
	}
	else
	{
		cout << "NO\n";
	}
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
