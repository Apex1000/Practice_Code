#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,c=1,m=0;
		cin>>N;
		int a;
		cin>>a;
		m=a;
		for(int i=0;i<N-1;i++){
			cin>>a;
			if(m>a)
			{
				c++;
				m=a;
			}
		}
		cout<<c<<endl;
	}
}