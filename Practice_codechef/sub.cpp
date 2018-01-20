#include <bits/stdc++.h>
using namespace std;
int main()
{
	long T;
	cin>>T;
	while(T--)
	{
		long N,cut=0,f=0;
		cin>>N;
		char s[N];
		for(long i=0;i<N;i++)
			cin>>s[i];
		for(long i=0;i<N;i++)
		{
			if(s[i]=='1')
				cut++;			
		}
		for(long i=cut;i>0;i--)
		{
			f=f+i;
		}
		cout<<f<<endl;
	}
}