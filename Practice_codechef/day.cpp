#include <bits/stdc++.h>
using namespace std;
int main()
{
	long T;
	cin>>T;
	while(T--)
	{
		string s;
		int w;
		cin>>w>>s;
		if(w==28)
		{
			cout<<"4 4 4 4 4 4 4"<<endl;
		}
		else if(w==30)
		{
			int day[7]={4},t;
			for(int i=0;i<7;i++)
				day[i]=4;
			if(s=="mon")
				t=1;
			else if(s=="tues")
				t=2;
			else if(s=="wed")
				t=3;
			else if(s=="thurs")
				t=4;
			else if(s=="fri")
				t=5;
			else if(s=="sat")
				t=6;
			else if(s=="sun")
				t=7;
			
			if(t==7)
			{
				day[t-1]=day[t-1]+1;
				t=0;
			}
			else
				day[t-1]=day[t-1]+1;
				
			day[t]=day[t]+1;
			for(int i=0;i<7;i++)
				cout<<day[i]<<" ";
			cout<<endl;
		}
		else if(w==31)
		{
			int day[8]={4};int t;
			for(int i=0;i<7;i++)
				day[i]=4;
			if(s=="mon")
				t=1;
			else if(s=="tues")
				t=2;
			else if(s=="wed")
				t=3;
			else if(s=="thurs")
				t=4;
			else if(s=="fri")
				t=5;
			else if(s=="sat")
				t=6;
			else if(s=="sun")
				t=7;
			
			if(t==7)
			{
				day[t-1]=day[t-1]+1;
				t=0;
				day[t]=day[t]+1;
				day[t+1]=day[t+1]+1;
			}
			else if(t==6)
			{
				day[t-1]=day[t-1]+1;
				day[t]=day[t]+1;
				t=0;
				day[t]=day[t]+1;
			}
			else
			{
				day[t-1]=day[t-1]+1;
				day[t]=day[t]+1;
				day[t+1]=day[t+1]+1;
			}	
			for(int i=0;i<7;i++)
				cout<<day[i]<<" ";
			cout<<endl;
		}
	}
}