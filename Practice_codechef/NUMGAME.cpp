#include <bits/stdc++.h>
using namespace std;
int main()
{
	long T;
	cin>>T;
	while(T--)
	{
		long long N;
		cin>>N;
		if(N==1)
			cout<<"ALICE"<<endl;
		else if(N==2)
			cout<<"BOB"<<endl;
		else{
			if(N%4==1)
				cout<<"ALICE"<<endl;
			else
				cout<<"BOB"<<endl;
		}

	}
}