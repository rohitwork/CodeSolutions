// https://codeforces.com/contest/1185/problem/B
// B. Email from Polycarp


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
	string a, b;
	cin >> a >> b;

	int al = a.length();
	int bl = b.length();

	if(bl < al)
	{
		cout << "NO\n";
		return;
	}


	// int bi = 0;
	// for(int i = 0 ; i < al ; i++)
	// {
	// 	char c = a[i];

	// 	for( ; bi < n ; bi++)
	// 	{
	// 		if(b[i] != c)
	// 			break;
	// 	}
	// }







	int x = 0;
	int i;
	for(i = 0 ; i < bl ; i++)
	{
		if(x < al && a[x] == b[i])
			x++;
		else if(i != 0 && b[i] == b[i - 1])
			continue;
		else
			break;
	}		

	if(i == bl && x == al)
		cout << "YES\n";
	else
		cout << "NO\n";



	// vector<char> v;
	// for(int i = 0 ; i < al ; i++)
	// {
	// 	if(v.size() == 0 || v.back() != a[i])
	// 		v.pb(a[i]);
	// }

	// vector<char> vb;
	// for(int i = 0 ; i < bl ; i++)
	// {
	// 	if(vb.size() == 0 || vb.back() != b[i])
	// 		vb.pb(b[i]);
	// }

	// if(v == vb)
	// 	cout << "YES\n";
	// else
	// 	cout << "NO\n";

	return;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	int t = 1;
	cin >> t;

	while(t--)
	{
		wrapper();
	}

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
