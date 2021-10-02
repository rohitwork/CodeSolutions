// https://codeforces.com/contest/1165/problem/D

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

	vll v;
	for(int i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		v.pb(x);
	}

	sort(all(v));

	ll x = v[0] * v[n - 1];
	

	ll sn = sqrt(x);


	
	int idx = 0;
	bool f = 1;

	vll ans;
	for(int i = 2 ; i <= sn ; i++)
	{
		int op1 = i;
		int op2 = x / op1;

		if(x % op1 == 0)
		{
			ans.pb(op1);
			if(op1 != op2 && x % op2 == 0)
			{
				ans.pb(op2);
			}
		}
	}

	sort(all(ans));

	if(ans == v)
		cout << x << "\n";
	else
		cout << -1 << "\n";

	// if(!f)
	// {
	// 	cout << -1 << "\n";
	// }
	// else
	// {
	// 	cout << x << "\n";
	// }
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
