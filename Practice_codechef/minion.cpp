#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,K,co=0;
		cin>>N>>K;
		int a[N];
		for(int  i=0;i<N;i++)
		{
			cin>>a[i];
			if((a[i]+K)%7==0)
				co++;
		}
		cout<<co<<endl;
	}
}