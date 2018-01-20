#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
using namespace std;
int *arr;
int main()
{
	arr=(int*)malloc(100000*sizeof(int));
	memset (arr,0,100000);
	int n1,n2,n3,big=0,a,c=0;
	cin>>n1>>n2>>n3;
	for(int i=0;i<n1+n2+n3;i++){
		cin>>a;
		arr[a]++;
		if(a>big)
			big=a;
		if(arr[a]==2){
			c++;
		}
	}
	cout<<c<<endl;
	for(int i=0;i<=big;i++)
		if(arr[i]>=2)
			cout<<i<<endl;

}