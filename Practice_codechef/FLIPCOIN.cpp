#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
	long N,Q;
	cin>>N>>Q;
	bool arr[N+1];
	memset(arr,0,N+1);
	while(Q--)
	{
		long z,a,b,c=0;
		cin>>z>>a>>b;
		if(z==0)
		{
			for(int i=a;i<=b;i++){
					if(arr[i]==0)
						arr[i]=1;
					else
						arr[i]=0;
			}
		}
		else
		{
			for(int i=a;i<=b;i++)
			{
				if(arr[i]==1)
					c++;
			}
			cout<<c<<endl;
		}
	}
}