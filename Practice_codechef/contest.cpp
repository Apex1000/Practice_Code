#include <bits/stdc++.h>
using namespace std;
int main()
{
	long T;
	cin>>T;
	while(T--)
	{
		long N,P,h=0,e=0;
		cin>>N>>P;
		long c[N];
		for(long int i=0;i<N;i++)
		{
			cin>>c[i];
			if(c[i]<=(P/10))
				h++;
			else if(c[i]>=(P/2))
				e++;
		}
		//cout<<h<<e;
		if(h==2&&e==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
}