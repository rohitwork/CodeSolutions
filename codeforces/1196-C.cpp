// https://codeforces.com/contest/1196/problem/C

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
	int n;
	cin >> n;;

	int maxPos = 1e5;
	int maxNeg = (-1) * maxPos;

	int mxx = maxPos;		int mnx = maxNeg;
	int mxy = maxPos;		int mny = maxNeg;

	while(n--)
	{
		int x, y, f1, f2, f3, f4;
		cin >> x >> y >> f1 >> f2 >> f3 >> f4;

		if(!f1)
			mnx = max(mnx, x);
		if(!f2)
			mxy = min(mxy, y);
		if(!f3)
			mxx = min(mxx, x);
		if(!f4)
			mny = max(mny, y);		
	}

	if(mnx <= mxx && mny <= mxy)
	{
		cout << 1 << " " << mnx << " " << mny << "\n";
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
	cin >> test;

	while(test--)
	{
		wrapper();
	}

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
