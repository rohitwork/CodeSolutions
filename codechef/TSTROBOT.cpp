// TSTROBOT
// https://www.codechef.com/LTIME70B/problems/TSTROBOT

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
		ll n, x;
		cin >> n >> x;

		string st;
		cin >> st;
		
		set<ll> s;
		s.insert(x);
		
		for(int i = 0 ; i < n ; i++)
		{
			if(st[i] == 'R')
			{
				x++;
				s.insert(x);
			}
			else
			{
				x--;
				s.insert(x);
			}
		}

		cout << s.size() << "\n";
	}
	
	return 0;
}
