// https://codeforces.com/problemset/problem/1111/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

bool isVowel(char x)
{
	if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
		return true;
	return false;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s, t;
	cin >> s >> t;

	int slen = s.length();
	int tlen = t.length();

	if(slen != tlen)
	{
		cout << "No\n";
		return 0;
	}

	for(int i = 0 ; i < slen ; i++)
	{
		if((!isVowel(s[i]) && !isVowel(t[i])) || (isVowel(s[i]) && isVowel(t[i])))
		{
			continue;
		}
		else
		{
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";
	
	return 0;
}
