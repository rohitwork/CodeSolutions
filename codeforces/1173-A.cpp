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
	int x, y, z;
	cin >> x >> y >> z;

	if(z == 0)
	{
		if(x > y)
			cout << "+";
		else if(x < y)
			cout << "-";
		else
			cout << 0;
		return;
	}

	if(x > y + z && x + z > y)
	{
		cout << "+";
	}

	if(y > x + z && y + z > x)
	{
		cout << "-";
	}

	if(x + z > y && x < y + z)
	{
		cout << "?";
	}

	if(x + z == y && x < y + z)
	{
		cout << "?";
	}

	if(y + z == x && y < z + x)
	{
		cout << "?";
	}

	// if(x > y + z)
	// {
	// 	cout << "+";
	// }
	// else if(y > x + z)
	// {
	// 	cout << "-";
	// }
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
