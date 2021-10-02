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

char a[505][505];
bool in[505][505];

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	int n, m;
	cin >> n >> m;

	for(int i = 0 ; i <= n ; i++)
		for(int j = 0 ; j <= m ; j++)
			in[i][j] = false;

	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < m ; j++)
			cin >> a[i][j];


	bool f = false;
	bool ans = true;

	for(int i = 1 ; i < n-1 ; i++)
	{
		for(int j = 1 ; j < m-1 ; j++)
		{
			if(!f && a[i][j] == '*' && in[i][j] == false)
			{
				if(a[i - 1][j] == '*' && a[i + 1][j] == '*' && a[i][j + 1] == '*' && a[i][j - 1] == '*')
				{
					f = true;
					// cout << f <<" f \n";
					for(int x = i ; x >= 0 ; x--)
					{
						if(a[x][j] == '*')
							in[x][j] = true;
						else
							break;
					}
					for(int x = i + 1 ; x < n ; x++)
					{
						if(a[x][j] == '*')
							in[x][j] = true;
						else
							break;
					}
					for(int x = j ; x >= 0 ; x--)
					{
						if(a[i][x] == '*')
							in[i][x] = true;
						else
							break;
					}
					for(int x = j ; x < m ; x++)
					{
						if(a[i][x] == '*')
							in[i][x] = true;
						else
							break;
					}
				}
			}
			else if(f && a[i][j] == '*' && in[i][j] == false)
			{
				ans = false;
				break;
			}

		}

		if(ans == false)
			break;
	}

	// 4 boundary condition

	if(ans && f)
	{
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < m ; j++)
			{
				if(a[i][j] == '*' && in[i][j] == false)
				{
					ans = false;
				}
			}
		}
	}

	// if(ans && f)
	// {
	// 	for(int i = 0 ; i < n ; i++)
	// 	{
	// 		if(a[i][0] == '*' && in[i][0] == false && f)
	// 			ans = false;
	// 		if(a[i][m - 1] == '*' && in[i][m - 1] == false && f)
	// 			ans = false;
	// 	}
	// 	if(ans)
	// 		for(int j = 0 ; j < m ; j++)
	// 		{
	// 			if(a[0][j] == '*' && in[0][j] == false && f)
	// 				ans = false;
	// 			if(a[n - 1][j] == '*' && in[n - 1][j] == false && f)
	// 				ans = false;
	// 		}
	// }


	// for(int i = 0 ; i < n ; i++)
	// {	
	// 	for(int j = 0 ; j < m ; j++)
	// 	{
	// 		cout << in[i][j] << " ";		
	// 	}
	// 	cout << endl;
	// }

	if(f && ans)
		cout << "YES\n";
	else
		cout << "NO\n";


	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
