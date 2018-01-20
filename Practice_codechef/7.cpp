#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int no;
	cin>>no;
	while(no--)
	{
		int n,N[100],flag=1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>N[i];
		}
		for(int i=0;i<n/2;i++)
		{
			if(N[i]>7)
				break;
			if(N[i]==N[(n-1)-i])
			{
				flag=0;
			}
		}
		if(flag==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
	return 0;
}