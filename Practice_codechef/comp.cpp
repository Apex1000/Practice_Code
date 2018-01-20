#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		long long sum=0,cut=0,len=s.size();
		for(int i=0;i<len;i++)
		{
			if(s[i]=='>')
				cut--;
			else //if(c=='>')
			{
				//if(cut<0){
					cut++;
				//	sum=sum+2;
				//}
			}
			if(cut==0)
				sum=i+1;
			if(cut<0)
				break;

		}
		cout<<sum<<endl;
	}
}