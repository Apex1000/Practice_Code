#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int z=s.size(),cut=0;
		int d=z/2;
		bool f[z]={false};
		//cout<<z;
		if(z%2==0)
		{
			for(int i=0;i<d;i++)
			{
				for(int j=d;j<z;j++)
				{
					if(s[i]==s[j] && f[j]==false)
					{
						f[j]=true;
						cut++;
						break;
					}
				}
			}
		}
		else
		{
			for(int i=0;i<d;i++)
			{
				for(int j=d+1;j<z;j++)
				{
					if(s[i]==s[j] && f[j]==false)
					{
						f[j]=true;
						cut++;
						break;
					}
				}
			}
		}
		if(cut==d)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}