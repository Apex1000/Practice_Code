#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int r=a%b;
	a=b;
	b=r;
	if(r==0)
		return a;
	else
		gcd(a,b); 
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long N,odd=0;
		std::vector<long> v;
		cin>>N;
		for(long long i=0;i<N;i++)
		{
			long input;
			cin>>input;
			v.push_back(input);
		}
		long z=v[0];
		for(long i=1;i<N;i++)
		{
			z=gcd(z,v[i]);
		}
		cout<<z<<endl;
	}
}