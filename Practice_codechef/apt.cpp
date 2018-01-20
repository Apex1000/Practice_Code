#include <bits/stdc++.h>
using namespace std;
int main()
{
	long T;
	cin>>T;
	while(T--)
	{
		long n,q;
		cin>>n>>q;
		long D[n],Q[q];
		for(long i=0;i<n;i++)
			cin>>D[i];
		for(long i=0;i<q;i++)
			cin>>Q[i];
		for(long i=0;i<q;i++)
		{
			long x;
			x=Q[i];
			for(long j=0;j<n;j++)
			{
				x=x/D[j];
			}
			cout<<x<<' ';
		}
		cout<<endl;
	}
}