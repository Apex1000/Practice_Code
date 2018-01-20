#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m;
		cin>>n>>m;
		int a[n],b[n]={0};
		for(int i=0;i<n;i++)
			cin>>a[i];
		int z=m;
		while(z!=0)
		{
			int c=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]<=z && b[i]==0){
					if(a[i]>c){
					c=a[i];
					m=i;
				}
				}
			}
			z=z-c;
			//cout<<c<<"haha";
			b[m]=1;
			if(c==0)
				break;
		}
		if(z==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}