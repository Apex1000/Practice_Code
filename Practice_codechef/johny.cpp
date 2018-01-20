#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long K,N,c=0;
		cin>>N;
		long a[N];
		for(long i=0;i<N;i++)
			cin>>a[i];
		cin>>K;
		for(long i=0;i<N;i++)
		{
			if(a[i]<a[K-1])
				c++;
		}
		cout<<c+1<<endl;
	}
}