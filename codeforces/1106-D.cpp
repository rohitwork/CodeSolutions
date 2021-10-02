// https://codeforces.com/contest/1106/problem/D

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
	
	int n, m;
	cin >> n >> m;

	// n vectors
	// represents adjeceny list
	vector<int> e[n + 1];
	bool visited[n + 1] = {0};

	for(int i = 1 ; i <= m ; i++)
	{
		int u, v;
		cin >> u >> v;

		// bidirectional edge - int nodes
		e[u].pb(v);
		e[v].pb(u);
	}

	visited[1] = true;
	priority_queue<int, vector<int>, greater<int> > q;
	// start from 1st nodes
	q.push(1);

	while(q.empty() == false)
	{
		int now = q.top();
		q.pop();

		cout << now << " ";

		// insert its neighbours into the priority queue
		for(auto p : e[now])
		{
			if(visited[p] == false)
			{
				q.push(p);
				visited[p] = true;
			}
		}
	}
	cout << "\n";
	return 0;
}