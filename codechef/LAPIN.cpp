// Foundation Level Mock Test #1
// Lapindromes

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
	string s;
	cin >> s;

	int sl = s.length();

	int half = sl / 2;

	map<char, int> left;
	map<char, int> right;
	for(int i = 0 ; i < half ; i++)
	{
		if(left.find(s[i]) == left.end())
		{
			left[s[i]] = 1;
		}
		else
		{
			left[s[i]]++;
		}
	}

	for(int i = sl - 1 ; i >= sl - half ; i--)
	{
		if(right.find(s[i]) == right.end())
		{
			right[s[i]] = 1;
		}
		else
		{
			right[s[i]]++;
		}
	}

	if(left == right)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}


	// if(left.size() == right.size())
	// {
	// 	map<char, int>::iterator it;
	// 	for(it = left.begin() ; it != left.end() ; it++)
	// 	{
	// 		// cout << it -> first << " - ";
	// 		// cout << left[it -> first] << " " << right[it -> first] << "\n";
	// 		if(left[it -> first] != right[it -> first])
	// 		{
	// 			cout << "NO\n";
	// 			return;
	// 		}
	// 	}
	// 	cout << "YES\n";
	// }
	// else
	// {
	// 	cout << "NO\n";
	// }

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
