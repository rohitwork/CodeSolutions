// https://codeforces.com/contest/1117/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
    cin >> n;
	ll a[100005];

    ll max = INT_MIN;
	for(int i = 0 ; i < n ; i++)
	{
        cin >> a[i];
	
        if(a[i] > max)
        {
            max = a[i];
        }
    }


	int finalAns = -1;
	int streak = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] == max)
		{
            while(i < n)
            {
                if(a[i] == max)
                {
                    streak++;
                    i++;
                }
                else
                {
                    break;
                }
            }
            if(streak > finalAns)
                finalAns = streak;
			streak = 0;
		}
	}

	cout << finalAns << '\n';
	
	return 0;
}
