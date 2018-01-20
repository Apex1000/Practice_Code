#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int no;
	cin>>no;
	while(no--)
	{
		long long int N,C,z=0;
		cin>>N>>C;
		long long int a[N];
		for(int i=0;i<N;i++)
		{
			cin>>a[i];
			z+=a[i];
		}
		if(C>=z){
			cout<<"Yes"<<endl;
			}
		else{
			cout<<"No"<<endl;
		}

	}
	return 0;
}