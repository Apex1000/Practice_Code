#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		int c=0;
		vector<int>v;
		int l=s.length();
		for(int i=0;i<l;i++)
		{
			if(s[i]==' ')
			v.push_back(i);
		}
		if(v.size()==2)
		{
			cout<<(char)toupper(s[0])<<". "<<(char)toupper(s[v[0]+1])<<". "<<(char)toupper(s[v[1]+1]);
			for(int j=v[1]+2;j<l;j++)
			cout<<(char)tolower(s[j]);
		}
		else if(v.size()==1)
		{
			cout<<(char)toupper(s[0])<<". "<<(char)toupper(s[v[0]+1]);
			for(int j=v[0]+2;j<l;j++)
			cout<<(char)tolower(s[j]);
		}
		else
		{
			cout<<(char)toupper(s[0]);
			for(int j=1;j<l;j++)
			cout<<(char)tolower(s[j]);
		}
		
		cout<<"\n";
	}
	return 0;
} 