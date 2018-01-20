#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,sum=0;
		string orgin,cont_rank;
		cin>>a>>orgin;
		while(a--)
		{
			string type;
			//cout<<a;
			cin>>type;
			if(type=="CONTEST_WON")
			{
				int rank;
				cin>>rank;
				if(rank<20)
					sum=sum+300+(20-rank);
				else
					sum=sum+300;
			}
			else if(type=="TOP_CONTRIBUTOR")
			{
				sum=sum+300;
			}
			else if(type=="BUG_FOUND")
			{
				int bug;
				cin>>bug;
				if(bug>=50)
					sum=sum+bug;
			}
			else if(type=="CONTEST_HOSTED")
			{
				sum=sum+50;
			}
		}
		if(orgin=="INDIAN")
			cout<<sum/200<<endl;
		else
			cout<<sum/400<<endl;
	}
}