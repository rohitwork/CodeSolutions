#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>

void stringTimeToInt(string a, int &x, int &y)
{
	x = 0;
	y = 0;

	// hour
	x = a[0] - '0';
	x = (x * 10) + (a[1] - '0');

	// minute 
	y = a[3] - '0';
	y = (y * 10) + (a[4] - '0');
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	

	string start;
	string end;

	cin >> start >> end;

	int h1, m1, h2, m2;


	stringTimeToInt(start, h1, m1);
	stringTimeToInt(end, h2, m2);

	int t1 = h1 * 60 + m1;
	int t2 = h2 * 60 + m2;

	int midTime = (t1 + t2) / 2;

	int ansHour = midTime / 60;
	int ansMin = midTime % 60;

	if(ansHour < 10) 
	{
		cout << 0;
	}
	cout << ansHour << ":";
	if(ansMin < 10)
	{
		cout << 0;
	} 
	cout << ansMin;

	cout << endl;
	return 0;
}
