#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int no;
	cin>>no;
	while(no--)
	{
		string s[100];
		string s1[100];
		int n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		int sum=0;
		for(int i=0;i<k;i++)
		{
			int l;
			cin>>l;
			for(int j=sum;j<l+sum;j++)
			{
				cin>>s1[j];
			}
			sum+=l;
		}
		int flag=0;
		sum=sizeof(s1);
		for(int i=0;i<n;i++)
		{
			flag=0;
			for (int j = 0; j < sum; j++)
			{
				if(s[i]==s1[j]){
					flag=1;
				}
			}
			if(flag==0)
				cout<<"NO";
			else
				cout<<"YES";
			if(i<n-1)
				cout<<" ";
		}
		cout<<endl;


	}
	return 0;
}