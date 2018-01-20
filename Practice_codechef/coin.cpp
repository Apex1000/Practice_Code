#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long G,I,N,Q;
		cin>>G;
		while(G--)
		{
			cin>>I>>N>>Q;
			if(N%2==0 || I==Q)
				cout<<N/2<<endl;
			else
				cout<<N/2+1<<endl;
		}
	}
}