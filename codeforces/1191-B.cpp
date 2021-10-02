// https://codeforces.com/contest/1191/problem/B

// I've still got a lot of fight left in me

#include<bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp> 
// using boost::multiprecision::cpp_int;
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

map<string, int> m;

void wrapper()
{
	string a[3];
	cin >> a[0] >> a[1] >> a[2];

	m[a[0]] = 1;
	m[a[1]] += 1;
	m[a[2]] += 1;

	if(m[a[0]] == 3)
	{
		cout << 0;
		return;
	}
	if(m[a[0]] == 2 || m[a[1]] == 2)
	{
		cout << 1;
		return;
	}

	if(m[a[0]] != 1 || m[a[1]] != 1 || m[a[2]] != 1)
	{
		return;
	}

	int calc[3][9];
	for(int i = 0 ; i < 3 ; i++)
		for(int j = 0 ; j < 9 ; j++)
			calc[i][j] = 0;

	for(int i = 0 ; i < 3 ; i++)
	{
		int x = a[i][0] - '0';
		--x;

		if(a[i][1] == 'm')
		{
			calc[0][x] = 1;
		}
		else if(a[i][1] == 's')
		{
			calc[1][x] = 1;
		}
		else if(a[i][1] == 'p')
		{
			calc[2][x] = 1;
		}
	}

	int m = 1;
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 1 ; j < 8 ; j++)
		{
            int sa = 0;
			if(calc[i][j] == 1)
			{
				sa++;
				if(calc[i][j - 1] == 1)
					sa++;
				if(calc[i][j + 1] == 1)
					sa++;
			}
			m = max(m, sa);
		}
	}

	if(m == 1)
	{
		for(int i = 0 ; i < 3 ; i++)
		{
			for(int j = 2 ; j < 7 ; j++)
			{
	            int sa = 0;
				if(calc[i][j] == 1)
				{
					sa++;
					if(calc[i][j - 2] == 1 || calc[i][j + 2] == 1)
						sa++;
				}
				m = max(m, sa);
			}
		}
	}

	cout << (3 - m) << "\n";
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
