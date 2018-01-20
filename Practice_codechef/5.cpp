#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int no;
	cin>>no;
	while(no--)
	{
		int n,sum=0,s[1000];
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s[i];
			sum+=s[i];
		}
		int small=s[0];
		for(int i=0;i<n;i++){
			if(small>s[i])
				small=s[i];
		}
		cout<<sum-(n*small)<<endl;
	}
	return 0;
}