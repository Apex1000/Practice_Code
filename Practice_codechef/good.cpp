#include <bits/stdc++.h>
#include <set>
#include <string>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int c=s.find("010");
		if(c==1)
			cout<<"Good"<<endl;
		else 
			cout<<"Bad"<<endl;
	}
}