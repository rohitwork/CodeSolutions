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

const ll N = 2e5 + 5;
const ll mod = 1e9 + 7;

ll size;
bool visited[N];
vector<ll> g[N];

ll pow(ll a, ll b, ll mod)
{
	ll ans = 1;
	while(b)
	{
		if(b & 1)		// odd power
		{
			ans = (ans * a) % mod; 
		}
		b = b >> 1; // divide the number by 2
		a = (a * a) % mod;
	}

	return ans;
}

void dfs(ll i)
{
	if(visited[i] == true)
		return;

	size++;
	visited[i] = true;
	for(auto &it: g[i])
	{
		dfs(it);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	ll n, k;
	cin >> n >> k;

	for(ll i = 1 ; i < n ; i++)
	{
		ll u, v, x;
		cin >> u >> v >> x;
		if(x == 0)
		{
			// ignore the balck edges and insert only red edges
			g[u].pb(v);
			g[v].pb(u);
		}
	}	

	ll ans = pow(n, k, mod);
	for(ll i = 1 ; i <= n ; i++)
	{
		if(visited[i] == true)
			continue;

		size = 0;
		dfs(i);
		ans -= pow(size, k, mod);
		ans += mod;
		ans %= mod;
	}

	cout << ans << "\n";
	return 0;
}

