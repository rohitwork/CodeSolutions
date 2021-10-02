// https://codeforces.com/contest/1165/problem/A

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
	int n, x, y;
	cin >> n >> x >> y;

	string s;
	cin >> s;

	int l = s.length();
	string rem = s.substr(l - x, l);

	string get = s.substr(l - y - 1, l);

	// cout << rem << " " << get << endl;



	int ans = 0;
	int rl = rem.length();
	for(int i = rl - 1; i >= 0 ; i--)
	{
		// cout << rl - i - 1 << " ";

		if(rl - i - 1 == y)
		{
			// cout << rem[i] << " x, ";
			if(rem[i] != '1')
				ans++;
		}
		else if(rem[i] != '0')
		{
			// cout << rem[i] << " n, ";
			ans++;
		}
	}

	// cout << endl;
	cout << ans << "\n";





	// int ans = 0;

	// int gl = get.length();
	// int rl = rem.length();

	// int i;
	// for(i = 1 ; i < gl ; i++)
	// {
	// 	// if(get[gl- i] != rem[rl - i])
	// 	// 	ans++;
	// 	if(rem[rl - i] == '1')
	// 		ans++;
	// }

	// if(rem[rl - i] == '0')
	// 	ans++;

	// i++;
	// for( ; i < rl ; i++)
	// {
	// 	if(rem[i] == '1')
	// 	{
	// 		ans++;
	// 	}
	// }

	// cout << ans << "\n";

	// string r = lltostr(rem);
	// string g = lltostr(get);

	// int ans = 0;
	// for(int i = 0 ; r[i] != '\0' ; i++)
	// {
	// 	if(r[i] != g[i])
	// 		ans++;
	// }
	// cout << ans << "\n";
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
