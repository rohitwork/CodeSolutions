// A. Tanya and Stairways
// https://codeforces.com/problemset/problem/1005/A

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
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int n;
	cin >> n;

	int ans = 0;

	int prev;
	cin >> prev;

	if(n == 1)
	{
		cout << 1 << " " << prev << "\n";
		return 0;
	}

	vi seq;

	for(int i = 1 ; i < n ; i++)
	{
		int nxt;
		cin >> nxt;

		if(nxt <= prev)
		{
			seq.pb(prev);
			ans++;
		}
		if(i == n - 1)
		{
			seq.pb(nxt);
			ans++;
		}

		prev = nxt;
	}

	cout << ans << "\n";
	for(unsigned int i = 0 ; i < seq.size() ; i++)
	{
		cout << seq[i] << " ";
	}

	return 0;
}
