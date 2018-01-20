	#include <bits/stdc++.h>
	using namespace std;
	int main()
	{
		int T;
		cin>>T;
		while(T--)
		{
			long a,b,c,d;
			cin>>a>>b>>c>>d;
			// if(a==b&&b==c)
			// 	cout<<"NO"<<endl;
			// else
			//{
				if(a==b)
				{
					if(c==d)
					{
						cout<<"YES"<<endl;
					}
					else
						cout<<"NO"<<endl;
				}
				else if(a==c)
				{
					if(b==d)
					{
						cout<<"YES"<<endl;
					}
					else
					cout<<"NO"<<endl;
				}
				else if(a==d)
				{
					if(b==c)
					{
						cout<<"YES"<<endl;
					}
					else
						cout<<"NO"<<endl;
				}
				// else if(b==c)
				// {
				// 	if(a==d)
				// 	{
				// 		cout<<"YES"<<endl;
				// 	}
				// 	else
				// 		cout<<"NO"<<endl;
				// }
				// else if(b==d)
				// {
				// 	if(a==c)
				// 	{
				// 		cout<<"YES"<<endl;
				// 	}
				// 	else
				// 		cout<<"NO"<<endl;
				// }
				// else if(c==d)
				// {
				// 	if(a==b)
				// 	{
				// 		cout<<"YES"<<endl;
				// 	}
				// 	else
				// 		cout<<"NO"<<endl;
				// }
			//}
		}
	}