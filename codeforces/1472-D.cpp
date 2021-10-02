// D. Even-Odd Game
// https://codeforces.com/contest/1472/problem/D

// Yeah, so here you are.
 
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
	ll n;
	cin >> n;

	vll a(n);
	rep0(i, n)
		cin >> a[i];

	ll globalAns = 0;

	sort(a.rbegin(), a.rend());


	// even = Alice turn
	// odd = Bob turn
	for(int i = 0 ; i < n ; i++)
	{
		// bob takes odd
		if(i & 1)
		{
			if(a[i] & 1)
				globalAns -= a[i];
		}
		else
		{
			if(!(a[i] & 1))
				globalAns += a[i];
		}
	}

	if(globalAns == 0)
		cout << "Tie";
	else if(globalAns > 0)
		cout << "Alice";
	else
		cout << "Bob";

	cout << "\n";

	return;
}
 
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
 
	int test = 1;
	cin >> test;
 
	while(test--)
	{
		wrapper();
	}
 
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}