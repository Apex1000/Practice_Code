#include <bits/stdc++.h>
using namespace std;
int prime(int x)
{
	for(int j=2;j<=sqrt(x);j++)
		if(x%j==0)
			return false;
		return true;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int x,y;
		cin>>x>>y;
		for(int i=1;i<=2000;i++){
			if(prime(x+y+i))
			{
				cout<<i<<endl;
				break;
			}
		}
	}
}
