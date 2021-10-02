// https://codeforces.com/contest/1174/problem/A
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
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
const int MOD = 1e9 + 7;

void wrapper()
{
	ll n;
	cin >> n;

	ll a[2 * n + 5];
	// ll left = 0;
	// ll right = 0;
	for(int i = 0 ; i < 2 * n ; i++)
	{
		cin >> a[i];
		// if(i < n)
		// 	left += a[i];
		// else
		// 	right += a[i];
	}















	sort(a, a + (2 * n));

	if(a[0] == a[2 * n - 1])
	{
		cout << -1 << "\n";
	}
	else
	{
		for(int i = 0 ; i < 2 * n ; i++)
		{
			cout << a[i] << " ";
		}
	}





	// bool f = false;
	// if(a[0] == 516996)
	// 	f = true;

	// int i = 0;
	// int j = n;

	// int idx = i;

	// // cout << left << "  " << right << endl;










	// while((left == right) && (idx < (2 * n)))
	// {
	// 	left -= a[i];
	// 	left += a[j];

	// 	right -= a[j];
	// 	right += a[i];

	// 	++i;
	// 	++j;
	// 	j %= (2 * n);

	// 	idx = i;
	// }















	// if(f)
	// 	cout << left <<"  " << right << endl;


	
	// if(left == right)
	// {
	// 	cout << -1 << "\n";
	// }
	// else
	// {
	// 	for(int x = idx ; x < (idx + (2 * n)) ; x++)
	// 	{
	// 		cout << a[x % (2 * n)] << " ";
	// 	}
	// 	cout << "\n";
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
