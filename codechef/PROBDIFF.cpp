//https://www.codechef.com/viewsolution/49896016
//contest AUG21C
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t,ct=0;
	cin >> t;
	while(t--)
	{
	    int a[5];
	    for(int i=0 ; i < 4 ; i++)
	    {
	        cin >> a[i];
	    }
	    sort(a,a+4);
	    for(int i=0 ; i < 4 ; i++)
	    {
	        if(a[i]==a[i + 1])
	        {
	            ct++;
	            if(a[i+1] == a[i+2])
	            {
	                ct++;
	                if(a[i+1]==a[i+3])
	                {
	                    ct++;
	                   // cout << 0 << endl;
	                }
	            }
	        }
	    }
	    //cout << ct << endl;
	     if(ct==0 || ct==1)
	{
	    cout << 2 << endl;
	    
	}
	else if(ct==2)
	{
	    cout << 2 << endl;
	}
	else if(ct==3)
	{
	    cout << 1 << endl;
	}
	else
	{
	    cout << 0 << endl;
	}
	   ct=0;
	 }
	
	
	
}
