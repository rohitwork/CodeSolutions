// B. Delete from the Left
// https://codeforces.com/problemset/problem/1005/B

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
	
	string s, t;
	cin >> s >> t;

	int sl = s.length();
	int tl = t.length();

	int ans = sl + tl;

	int si = sl - 1;
	int ti = tl - 1;
	int commonSuffix = 0;
	while(si >= 0 && ti >= 0)
	{
		if(s[si] == t[ti])
		{
			commonSuffix++;
		}
		else
			break;

		si--;
		ti--;
	}

	ans -= (2 * commonSuffix);

	cout << ans;

	return 0;
}
