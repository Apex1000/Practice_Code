#include <bits/stdc++.h>
using namespace std;
int main()
{
	long N,sum=0,t=0;
	cin>>N;
	for(long i=0;i<N;i++){
		long z;
		cin>>z;
		sum+=z;
	}
	t=N*(N+1)/2;
	if(t==sum)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}