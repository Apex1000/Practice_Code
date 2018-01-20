#include <bits/stdc++.h>
#include <string>
#include <set>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s,b;
		int c=0;
		cin>>s;
		cin>>b;
		set<char> S(s.begin(),s.end());
		int a=s.size(),z=b.size();
		for(int i=0;i<z;i++)	
				if(S.count(b[i])){
					c++;
				}
		cout<<c<<endl;
	}
}