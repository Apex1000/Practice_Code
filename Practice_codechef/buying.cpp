#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,X,a,s=0,smal=9999;
		cin>>N>>X;
		for(int i=0;i<N;i++){
			cin>>a;
			s+=a;
			if(smal>a)
				smal=a;
		}
		//cout<<smal;
		int mod=s%X;
		if(mod>=smal)
			cout<<"-1"<<endl;
		else
			cout<<s/X<<endl;
	}
}