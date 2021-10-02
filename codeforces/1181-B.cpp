// https://codeforces.com/problemset/problem/1181/B
// B. Split a Number

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define F first
#define S second
#define pn printf("\n")
#define si(n) scanf("%d", &n)
#define sl(n) scanf("%lld", &n)
#define all(c) (c).begin(), (c).end()
#define tra(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
ll strtoll(string s) { stringstream str(s); ll number=0; str>>number; return number; }
string lltostr(ll n){ stringstream ss; ss<<n; return ss.str(); }
const int MOD = 1e9 + 7;

string add(string a, string b)
{
	int n1 = a.length();
	int n2 = b.length();

	if(n1 > n2)
	{
		swap(a, b);

		n1 = a.length();
		n2 = b.length();
	}

	string ans = "";

	reverse(all(a));
	reverse(all(b));

	int carry = 0;
	for(int i = 0 ; i < n1 ; i++)
	{
		int sum = (a[i] - '0') + (b[i] - '0') + carry;
		ans.pb(sum % 10 + '0');

		carry = sum / 10;
	}

	for(int i = n1 ; i < n2 ; i++)
	{
		int sum = (b[i] - '0') + carry;
		ans.pb(sum % 10 + '0');

		carry = sum / 10;
	}

	if(carry)
		ans.pb(carry + '0');

	reverse(all(ans));

	return ans;
}

string compare(string a, string b)
{
	int al = a.length();
	int bl = b.length();

	if(al < bl)
		return a;
	else if(bl < al)
		return b;

	int i;
	for(i = 0 ; i < al ; i++)
	{
		if(a[i] < b[i])
			return a;
		else if(a[i] > b[i])
			return b;
		else
			continue;
	}

	if(i == al)
		return a;
}


void wrapper()
{
	ll n;
	cin >> n;

	string number;
	cin >> number;

	string a = number;

	string first, second;

	if(n % 2 == 0)		// even length string
	{
		first = a.substr(0, n / 2);		// starting index, length
		second = a.substr(n / 2, n / 2);
	}
	else
	{
		first = a.substr(0, n / 2 + 1);		// 3 : 2 break
		second = a.substr(n / 2 + 1, n / 2);
	}
	// cout << first << " " << second << endl;

	// if leading zeroes in second string
	// shift zeroes to the left
	while(second[0] == '0' && second.length() > 0)
	{
		first += second[0];
		second = second.substr(1);
	}

	// cout << first << " " << second << endl;
	string sum1 = add(first, second);
	// cout << sum1 << "  sum1\n";



	ll i = first.length() - 1;

	string diff = "";

	// moves zeroes from the first string and one digit
	while(i >= 0)
	{
		if(first[i] == '0')
			diff += "0";
		else
		{
			diff += first[i];
			break;
		}
		i--;
	}

	reverse(all(diff));

	// create second
	diff += second;

	// create first cuz trailing zeroes and one element shifted
	if(i >= 0)
		first = first.substr(0, i);


	// cout << first << " " << diff << endl;
	string sum2 = add(first, diff);
	// cout << sum2 << "  sum2\n";

	cout << compare(sum1, sum2) << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	// clock_t tStart = clock();
	/*******/

	int t = 1;
	// cin >> t;

	while(t--)
	{
		wrapper();
	}

	/*******/
	// printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}
