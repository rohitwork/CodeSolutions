#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

int remaining[100005] = {0};
int cost[100005] = {0};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	ll n, m;
	cin >> n >> m;

	priority_queue<pii, vector<pii>, greater<pii> > q;

	// remaining dishes
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> remaining[i];
	}
	// cost of i-th dish
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> cost[i];
		q.push(mp(cost[i], i));
	}

	// for each customer
	for(int i = 0 ; i < m ; i++)
	{
		int t, d;
		cin >> t >> d;

		// cout << t << " " << d << " -- ";

		// same no of dishes available
		if(d <= remaining[t])
		{
			ll ans = 1LL * d * cost[t];
			remaining[t] -= d;
			cout << ans << "\n";
		}
		else
		{
			bool served = false;
			ll ans = 1LL * remaining[t] * cost[t];
			d -= remaining[t];
			remaining[t] = 0;
			
			while(q.empty() == false)
			{

				// cout << ans << '-';
				while(q.empty() == false && remaining[q.top().second] == 0)
				{
					q.pop();
				}
				if(q.empty() == true)
				{
					break;
				}


				pii x = q.top();
				// x.first = cost | x.second = index
				if(d <= remaining[x.second])
				{
					ans += 1LL * d * x.first;
					remaining[x.second] -= d;
					served = true; 				// customer served
					cout << ans << "\n";
					break;
				}
				else
				{

					ans += 1LL * remaining[x.second] * x.first;
					d -= remaining[x.second];
					remaining[x.second] = 0;
					q.pop();
				}
			}

			if(served == false)
			{
				// output ans new line
				cout << 0 <<'\n';
			}
		}
	}

	return 0;
}
