#include <bits/stdc++.h>
#include <set>
using namespace std;
int getsum(int BIT[],int index)
{
	int sum=0;
	index+=1;
	while(index>0)
	{
		sum+=BIT[index];
		index-=index&(-index);
	}
	return sum;
}
void update(int BIT[],int n,int index,int val)
{
	index+=1;
	while(index<=n)
	{
		BIT[index]+=val;
		index-=index &(-index);
	}
}
int *construct(int arr[],int n)
{
	int *BIT=new int[n+1];
	for(int i=0;i<n;i++)
		update(BIT,n,i,arr[i]);
	return BIT;
}
int main()
{
	int T;
		int n,no;
		cin>>n;
		int arr[n];
		memset(arr,0,n);
		int z= sizeof(arr)/sizeof(arr[0]);
		int *tree=construct(arr,z);
		cout<<getsum(tree,4);

	return 0;
}