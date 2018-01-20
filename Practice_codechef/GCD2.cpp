#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char str[255];
		int a;
		cin>>a;
		int temp=a,len1=0,b=0,c=0;
		while(temp>0)
		{
			temp=temp/10;
			len1++;
		}
		cin>>str;
		if(a==0)
			cout<<str<<endl;
		else
		{
			int len2=strlen(str);
			for(int i=0;i<len1;i++)
			{
				b=b*10;
				b=b+(str[i]-48);
				//cout<<b<<endl;
			}
			c=b%a;
			for(int i=len1;i<len2;i++)
			{
				b=c;
				b=b*10;
				b=b+(str[i]-48);
				c=b%a;
				//cout<<b<<endl;
			}
			while(c>0)
			{
				temp=a%c;
				a=c;
				c=temp;
			}
			cout<<a<<endl;
		}
	}
	return 0;
}