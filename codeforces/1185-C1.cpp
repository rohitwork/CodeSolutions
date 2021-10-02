// https://codeforces.com/contest/1185/problem/C1
// C1. Exam in BerSU (easy version)


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
#define tra(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
const int MOD = 1e9 + 7;

void wrapper()
{
	int n;
	int m;
	cin >> n >> m;

	vi v;
	vi a;
	int sum = 0;
	


	for(int i = 0 ; i < n ; i++)
	{
		int x;
		cin >> x;

		sum += x;

		// p.push(x);

		a.pb(x);
		v.pb(sum);
	}

	priority_queue<int> p;

	int sub = 0;
	int totcnt = 0;

	for(int i = 0 ; i < n ; i++)
	{
		if(v[i] <= m)
		{
			cout << 0 << " ";
		}
		else
		{
			// cout << v[i] << "-> ";
			int cnt = 0;
			
			vi xxz;
			while(v[i] > m && p.empty() == false)
			{
				int popped = p.top();

				xxz.pb(popped);

				// cout << popped << " ";

				// sub += popped;
				v[i] -= popped;

				p.pop();
				cnt++;
			}

			for(int zz = 0 ; zz < xxz.size() ; zz++)
			{
				p.push(xxz[zz]);
			}
			// cout << endl;
			
			cout << cnt << " ";

			// totcnt += cnt;
			// if(v[i] <= m)
				// cout << totcnt << " \n";
			// else
				// cout << -1 << " ";
			// cout << endl;
		}

		p.push(a[i]);
	}

	cout << "\n";








	// for(int i = 0 ; i < n ; i++)
	// {
	// 	if(v[i] <= m)
	// 		cout << 0 << " ";
	// 	else
	// 	{
	// 		int x = v[i];
	// 		int cnt = 0;
	// 		for(int j = i - 1 ;  j >= 0 ; j--)
	// 		{
	// 			x -= a[j];
	// 			cnt++;
	// 			if(x <= m)
	// 				break;
	// 		}
	// 		cout << cnt << " ";
	// 	}
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
