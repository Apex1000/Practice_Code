#include <bits/stdc++.h>
using namespace std;
int getsum(int BIT[],int index)
{
	int sum=0;
	index+=1;
	while(index>0)
	{
		sum+=BIT[index];
		index -= index & (-index);
	}
	return sum;
}
void update(int BIT[],int n,int index,int val)
{
	index+=1;
	while(index<=n)
	{
		BIT[index]+=val;
		index+=index & (-index);
	}
}
int *construct(int arr[],int n)
{
	int *BIT = new int[n+1];
	for(int i=1;i<=n;i++)
		BIT[i]=0;
	for(int i=0;i<n;i++)
		update(BIT,n,i,arr[i]);
	return BIT;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int *BIT = construct(arr,n);
	cout<<getsum(BIT,1);
}