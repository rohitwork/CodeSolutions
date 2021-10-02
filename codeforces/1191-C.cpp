// https://codeforces.com/contest/1191/problem/C

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



// ********************
// *****EASY WAY*******
// ********************

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	ull n, m, k;
	cin >> n >> m >> k;

	vector<ull> v(m);
	for(ll i = 0 ; i < m ; i++)
		cin >> v[i];

	ll ans = 0;
	ll sum = 0;
	ll now = 0;	// index

	while(now < m)
	{
		ll r = ((v[now] - sum - 1) / k + 1) * k + sum;

		while(now < m && v[now] <= r)
		{
			sum++;
			now++;
		}
		ans++;
	}

	cout << ans << "\n";

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}


// ********************
// *****MY WAY*********
// ********************


// void wrapper()
// {
// 	ull n, m, k;
// 	cin >> n >> m >> k;

// 	deque<ull> v(m);
// 	for(ll i = 0 ; i < m ; i++)
// 		cin >> v[i];

// 	// numbers in each
// 	ull numbersInEach = k;
// 	// partitions
// 	ull partitions = n / k;

// 	ull deleted = 0;
// 	ull prevDelete = 0;

// 	ll ans = 0;
// 	for(ull i = 1 ; i <= partitions ; i++)
// 	{
//         // cout << i << " -> \n";
// 		while(!v.empty())
// 		{
// 			ull maxNumber = min(i * k + deleted, n);

//             // cout << "max " << maxNumber << endl;

//             // cout << "search: " << maxNumber << " : ";
// 			ll idx = lower_bound(all(v), maxNumber) - v.begin();
// 			if(idx == v.size() || v[idx] > maxNumber)
// 				idx--;
			
// 			// cout << idx << " index\n";
// 			if(idx == -1 || idx == prevDelete)
// 				break;

// 			deleted += (idx + 1) - prevDelete;
// 			deleted += (idx + 1);
// 			prevDelete = idx + 1;

// 			// cout << deleted << " " << prevDelete << endl;
// 			// cout << deleted << " " << endl;
// 			ans++;
			
// 			// while(idx >= 0)
// 			// {
// 			// 	v.pop_front();
// 			// 	idx--;
// 			// }

// 			// for(auto it: v)
// 			// 	cout << it << " ";
// 			// cout << endl;

// 			if(v.empty())
// 			{
// 				break;
// 			}
// 		}
// 	}

// 	cout << ans << "\n";
// }

// int main()
// {
// 	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// 	// clock_t tStart = clock();
// 	/*******/

// 	int t = 1;
// 	// cin >> t;

// 	while(t--)
// 	{
// 		wrapper();
// 	}

// 	/*******/
// 	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
// 	return 0;
// }
