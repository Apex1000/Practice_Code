#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int c=0,N;
		cin>>N;
		while(N--){
		int id,sum;
		cin>>id>>sum;
		c=c+(id-sum);
	}
	cout<<c<<endl;
	}

}