// https://codeforces.com/contest/1178/problem/A
// Prime Minister

// Let's not make it complicated

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
#define rep0(i, n) for(ll i = 0 ; i < n ; i++)
#define rep1(i, n) for(ll i = 1 ; i <= n ; i++)
#define si(n) scanf("%d", &n)
#define sll(n) scanf("%lld", &n)
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
bool cmpfloat(double a, double b, double eps = 0.000001) { return fabs(a - b) <= eps; }
// int dx4[] = { -1, +1,  0,  0 };
// int dy4[] = {  0,  0, -1, +1 };
// int dx8[] = { -1, -1, -1,  0, +1, +1, +1,  0 };
// int dy8[] = { -1,  0, +1, +1, +1,  0, -1, -1 };
// int knx8[] = { -2, -2, -1, +1, +2, +2, +1, -1 };
// int kny8[] = { -1, +1, +2, +2, +1, -1, -2, -2 };
const int MOD = 1e9 + 7;

void wrapper()
{
	int a[101];
	int n;	cin >> n;

	int sum = 0;
	rep0(i, n)
	{
		cin >> a[i];
		sum += a[i];
	}

	int rqd = (sum / 2) + 1;

	if(a[0] >= rqd)
	{
		cout << "1\n1\n";
		return;
	}

	int alice = a[0];
	int init = alice;

	bool visit[n];
	fill(visit, visit + n, false);

	vi ans;
    bool f = true;
	while(f)
	{
		f = false;
		for(int i = 1 ; i < n ; i++)
		{
			if(visit[i] == false && 2 * a[i] <= init)
			{
				ans.pb(i);
				visit[i] = true;
				f = true;
                alice += a[i];
                if(alice >= rqd)
                    break;
			}
		}

		if(alice >= rqd)
			break;
	}

	if(alice >= rqd)
	{
		cout << (ans.size() + 1) << "\n";
		cout << "1 ";
        rep0(i, ans.size())
			cout << (ans[i] + 1) << " ";
		cout << "\n";
	}
	else
		cout << 0 << "\n";

	return;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	int test = 1;
	// cin >> test;

	while(test--)
	{
		wrapper();
	}

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
