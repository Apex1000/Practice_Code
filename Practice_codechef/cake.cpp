#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long a,b;
		cin>>a>>b;
		string s[a];
		for(int i=0;i<a;i++)
		{
			cin>>s[i];
		}
		long min1=0;
		bool ok=0;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(!ok)
				{
					if(j%2==0)
					{
						if(s[i][j]=='R')
							min1+=5;
					}
					else if(j%2!=0)
					{
						if(s[i][j]=='G')
							min1+=3;
					}
				}
				else
				{
					if(j%2==0)
					{
						if(s[i][j]=='G')
							min1+=3;
					}
					else if(j%2!=0)
					{
						if(s[i][j]=='R')
							min1+=5;
					}	
				}
			}
			ok=ok^1;
		}

		long min2=0;
		ok=1;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(!ok)
				{
					if(j%2==0)
					{
						if(s[i][j]=='R')
							min2+=5;
					}
					else if(j%2!=0)
					{
						if(s[i][j]=='G')
							min2+=3;
					}
				}
				else
				{
					if(j%2==0)
					{
						if(s[i][j]=='G')
							min2+=3;
					}
					else if(j%2!=0)
					{
						if(s[i][j]=='R')
							min2+=5;
					}	
				}
			}
			ok=ok^1;
		}
		cout<<min(min1,min2)<<endl;
	}
	return 0;
}