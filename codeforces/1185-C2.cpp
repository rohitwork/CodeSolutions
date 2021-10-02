// https://codeforces.com/contest/1185/problem/C2
// C2. Exam in BerSU (hard version)

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
#define tra(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
const int MOD = 1e9 + 7;

void wrapper()
{
	ll n, m;
	cin >> n >> m;

	ll sum = 0;

	int countOfNumbers[122];
	fill(countOfNumbers, countOfNumbers + 122, 0);
	for(int i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		sum += x;

		int ans = 0;

		if(sum > m)
		{
			ll needed = sum - m;

			for(int number = 100 ; number >= 0 ; number--)
			{
				if((countOfNumbers[number] * number) > needed)
				{
					if(needed % number == 0)
					{
						ans += (needed / number);
					}
					else
					{
						ans += (needed/ number) + 1;
					}
					break;
				}
				else
				{
					ans += countOfNumbers[number];
					needed -= (countOfNumbers[number] * number);
				}
			}
		}

		countOfNumbers[x]++;
	
		cout << ans << " ";
	}

	return;
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
