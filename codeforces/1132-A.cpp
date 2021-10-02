// https://codeforces.com/contest/1132/problem/A

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{

	ll a, b, c, d;
	cin >> a >> b >> c >> d; 		// count for ((, (), )(, ))

	if(a != d)
	{
		cout << 0;
	}
	else if((c > 0) && (a == 0))
	{
     	cout << 0;
	}
    else
    {
        cout << 1;
    }

	return 0;
}
