#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int q;
	cin >> q ;
	
	while(q--)
	{
		int notes[20];
		int noOfNotes;
		int demand;
		
		cin >> noOfNotes >> demand ;
 
		for(int i = 0 ; i < noOfNotes ; i++)
		{
			cin >> notes[i];
		}
 
		int range = (1 << noOfNotes) - 1 ;
 
		int i ;
		for(i = 0 ; i <= range ; i++)
		{
			long int sum = 0 ;
			int arrIndex = 0 ;
			int no = i ;
			while(no > 0)
			{
				if(no & 1)
				{
					sum += notes[arrIndex];
				}
				
				arrIndex++;
				no = no >> 1;
			}
			if(sum == demand)
			{
				cout << "Yes\n";
				break;
			}
		}
 
		if(i > range)
		{
			cout << "No\n";
		}
	}
	return 0 ;
}