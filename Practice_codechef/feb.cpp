#include <bits/stdc++.h>
using namespace std;
int z[110+1];
int feb(int a)
{
	z[0]=0,z[1]=1;
	for(int i=2;i<=a;i++)
		z[i]=z[i-1]+z[i-2];
	return z[a];
}
int main()
{
	int a;
	cin>>a;
	feb(a);
	for(int i=0;i<=10;i++)
		cout<<z[i]<<" ";
}