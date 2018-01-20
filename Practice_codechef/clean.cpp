#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int a[n]={false};
		for(int i=0;i<m;i++)
		{
			int c;
			cin>>c;
			a[c-1]=true;
		}
		// for(int j=0;j<2;j++)
		// {
			int c=0;
			for(int i=0;i<n;i++)
			{	
				if(a[i]==false)
					c++;
				if(c%2==1 && a[i]==false)
				{
					cout<<i+1<<" ";;
					a[i]=true;
				}
			}
			if(c==0)
					cout<<" ";
			cout<<endl;
			c=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]==false)
				{
					cout<<i+1<<" ";
					c++;
				}
			}
			if(c==0)
					cout<<" ";
			cout<<endl;
		//}
	}
}