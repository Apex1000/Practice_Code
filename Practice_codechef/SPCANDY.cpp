#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N,K;
		cin>>N>>K;
		if(K==0)
		{
			cout<<0<<" "<<N<<endl;
		}
		else
		{
			cout<<N/K<<" "<<N%K<<endl;
		}
	}
}