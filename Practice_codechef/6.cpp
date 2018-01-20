#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int no;
	cin>>no;
	while(no--)
	{
		int n,k,count=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			int c,sum=0;
			cin>>c;
			if((c+k)%7==0)
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}