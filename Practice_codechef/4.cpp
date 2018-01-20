#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int no;
	cin>>no;
	while(no--)
	{
		long long int x,y,k,n;
		int flag=0;
		cin>>x>>y>>k>>n;
		long long int p[n],c[n];
		for(int i=0;i<n;i++)
			cin>>p[i]>>c[i];
		for(int i=0;i<n;i++)	
			if(p[i]>=x-y && k>=c[i]){
				flag=1;
				break;
			}
		if(flag==1)
			cout<<"LuckyChef"<<endl;
		else
			cout<<"UnluckyChef"<<endl;
	}
	return 0;
}