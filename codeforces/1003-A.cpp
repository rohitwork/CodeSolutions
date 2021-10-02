// https://codeforces.com/problemset/problem/1003/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	
	int n;
	cin >> n;

	int freq[105];
	memset(freq, 0, sizeof(freq));
	for(int i = 0 ; i < n ; i++)
	{
		int x;
		cin >> x;

		freq[x]++;
	}

	int ans = 1;
	for(int i = 0 ; i < 105 ; i++)
	{
		if(freq[i] > ans)
		{
			ans = freq[i];
		}
	}

	cout << ans << endl;

	return 0;
}
