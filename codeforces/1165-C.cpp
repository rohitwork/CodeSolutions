// https://codeforces.com/contest/1165/problem/C

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

	string s;
	cin >> s;

	int sl = s.length();
	
	vector<char> v;
	v.pb(s[0]);
	for(int i = 1 ; i < n ; i++)
	{
		// because check in pairs
		if(v.size() % 2 == 0)
		{
			v.pb(s[i]);
		}
		else if(v.back() != s[i])
		{
			v.pb(s[i]);
		}
	}

	if(v.size() & 1)
		v.pop_back();

	cout << (n - v.size());
	cout << "\n";
	for(int i = 0 ; i < v.size() ; i++)
	{
		cout << v[i];
	}
	cout << "\n";
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
