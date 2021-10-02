#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t ;
	scanf("%d", &t);
 
	int d, n ;
	while(t--)
	{
		cin >> d >> n ;
		register long long sum = 0 ;
 
		for(int k = 1 ; k <= d ; k++)
		{
			sum = 0;
			
			sum = (n*(n+1))/2 ;
			
			n = sum;
 
		}
 
		printf("%d\n", sum);
	}
} 