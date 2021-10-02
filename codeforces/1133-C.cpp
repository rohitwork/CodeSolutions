#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll maxTeamSize(vector<ll> v, ll n)
{
	vector<ll> teamSize(n);

	for(ll i = 0 ; i < n ; i++)
	{
        ll idx = lower_bound(v.begin(), v.end(), v[i] - 5) - v.begin();
        // cout << v[i] << " " << idx << endl;

        ll j;
        if(v[idx] < teamSize[i] - 5)
        	j = ++idx;
        else
        	j = idx;

        if(j < i)
            teamSize[i] = i - j + 1;
        else
            teamSize[i] = 1;
	}

    ll ans = INT_MIN;
    for(ll i = 0 ; i < n ; i++)
    {
        if(teamSize[i] > ans)
            ans = teamSize[i];
    }

	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n;
	cin >> n;

	vector<ll> v;
	for(ll i = 0 ; i < n ; i++)
	{
		ll x;
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	cout << maxTeamSize(v, n);
	
	return 0;
}
