#include <bits/stdc++.h>
using namespace std;
#define MAX 500
int arr[MAX];
int arr_size;
int multiply(int x,int arr[],int arr_size)
{
	int carry=0;
	for(int i=0;i<arr_size;i++)
	{
		int prod=arr[i]*x+carry;
		arr[i]=prod%10;
		carry=prod/10;
	}
	while(carry)
	{
		arr[arr_size]=carry%10;
		carry=carry/10;
		arr_size++;
	}
	return arr_size;
}
void fact(int N)
{
	arr[0]=1;
	arr_size=1;
	for(int x=2;x<=N;x++)
		arr_size=multiply(x,arr,arr_size);
	for (int i=arr_size-1;i>=0;i--)
	{
		cout<<arr[i];
	}
	cout<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		fact(N);
	}
}