#include <bits/stdc++.h>
using namespace std;
int main()
{
	long T;
	cin>>T;
	while(T--)
	{
		string s;
		char tmpP='X';
		cin>>s;
		long long int cutA=0,cutD=0,tmp1=0,tmp2=0,cutB=0;
		for(char c:s)
		{
			if(c == '.')
				cutD++;
			else
			{
				if(c=='A')
					cutA++;
				else
					cutB++;
				if(c == tmpP)
				{
					if(c == 'A')
						cutA+=cutD;
					else
						cutB+=cutD;
				}
				cutD=0;
				tmpP=c;
			}
		}
		cout<<cutA<<" "<<cutB<<endl;
	}
}