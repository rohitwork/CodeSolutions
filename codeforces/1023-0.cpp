#include<bits/stdc++.h>
using namespace std;

bool wildcardMatching(char *s, char *t, int a, int b);

int main()
{
	char s[200005];
	char t[200005];

	int a, b;
	cin >> a >> b;

	cin >> s;
	cin >> t;

	if(wildcardMatching(s, t, a, b) == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

bool wildcardMatching(char *s, char *t, int a, int b)
{
	bool match[200005] = {0};

	for(int i = 0 ; i < a ; i++)
	{
		if(s[i] == '*')
		{
			break;
		}

		if(s[i] != t[i])
		{
			break;
		}

		match[i] = true;
	}

	int tkaLast = b - 1;
	for(int i = a - 1 ; i >= 0 ; i--)
	{
		if(s[i] == '*')
		{
			return true;
		}

		if(s[i] == t[tkaLast] && match[tkaLast] == false)
		{
			match[i] = true;
		}

		if(s[i] != t[tkaLast] || match[tkaLast] == true)
		{
			return false;
		}
        tkaLast--;
	}

	return false;
}