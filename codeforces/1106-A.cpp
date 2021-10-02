// https://codeforces.com/contest/1106/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool inBound(int x, int y, int n)
{
	if(x < 0 || y < 0 || x >= n || y >= n)
	{
		return false;
	}
	return true;
}

ll countX(char a[][500], int n)
{
	ll count = 0;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(a[i][j] == 'X')
			{
				if(inBound(i + 1, j + 1, n) && a[i + 1][j + 1] == 'X')
				{
					if(inBound(i + 1, j - 1, n) && a[i + 1][j - 1] == 'X')
					{
						if(inBound(i - 1, j - 1, n) && a[i - 1][j - 1] == 'X')
						{
							if(inBound(i - 1, j + 1, n) && a[i - 1][j + 1] == 'X')
							{
								count++;
							}
						}
					}
				}
			}
		}
	}	
	return count;
}

int main() 
{
	char a[500][500];

	int n;
	cin >> n;

	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cin >> a[i][j];
		}
	}

	cout << countX(a, n);

	return 0;
}