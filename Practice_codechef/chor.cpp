#include<iostream>
#include<vector>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	while(n--)
	{
		long m,x,y,a[100];
		int b[101]={false},cut=0;
		cin>>m>>x>>y;
		for(long i=0;i<m;i++)
		{
			cin>>a[i];
		}
		long sum=0;
		for(long i=0;i<m;i++)
		{
			long z=x*y;
			long t=a[i]-z;
			//cout<<t;
			if(t<0)
				t=1;
			long t1=a[i]+z;
			// cout<<t<<" "<<t1<<endl;
			for(long j=t;j<=t1;j++)
				b[j]=true;
			//sum=sum+t+t1;
		}
		for(long i=1;i<=100;i++)
		{
			if(b[i]==false)
				cut++;
		}
		cout<<cut<<endl;
	}
}