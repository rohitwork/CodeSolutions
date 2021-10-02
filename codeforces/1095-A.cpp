// https://codeforces.com/contest/1095/problem/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long

string decipher(string s, int n)
{
	int x = 1;
	string res = "";
	for(int i = 0 ; i < n ; )
	{
		res += s[i];
		i += x;
		x++;
	}

	return res;
}

int main()
{
	ll n;
	cin >> n;

	string s;
	cin >> s;

	cout << decipher(s, n);
	return 0;
}