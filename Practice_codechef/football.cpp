#include <bits/stdc++.h>
using namespace std;
int main()
{
	long t;
	cin>>t;
	while(t--)
	{
		long n,cou=0,cou1=0;
		cin>>n;
		string s[n],s1;
		for(long i=0;i<n;i++)
		{
			cin>>s[i];
			if(s[0]==s[i])
				cou++;
			else
			{
				s1=s[i];
				cou1++;
			}
			//cout<<cou;
		}
		if(cou>cou1)
			cout<<s[0]<<endl;
		else if(cou1==cou)
			cout<<"Draw"<<endl;
		else
			cout<<s1<<endl;

	}
}