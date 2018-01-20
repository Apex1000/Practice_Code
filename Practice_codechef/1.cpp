#include <iostream>
using namespace std;
int no,sum;
int prefixSum(int i,int a[])
{
	sum=0;
	for(int j=i;j<no;j++)
	{
		sum+=a[j];
		
	}
	return sum;
}
int suffixSum(int j,int a[])
{
	sum=0;
	for (int i = j; i >= 0; i--)
	{
		sum+=a[i];
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int z;
		cin>>no;
		int a[no],b[no];
		for(int i=0;i<no;i++)
			cin>>a[i];
		for(int i=0;i<no;i++)
		{	
			z = prefixSum(i,a);
			int z1 = suffixSum(i,a);
			b[i]=z+z1;
		}
		z=0;
		int big=b[0];
		for(int i=0;i<no;i++)
		{
			if(big>b[i])
			{
				big=b[i];
				z=i;
			}
		}
		cout<<z+1<<endl;
	}
	return 0;
}