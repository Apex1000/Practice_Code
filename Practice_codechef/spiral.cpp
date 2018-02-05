#include <bits/stdc++.h>
using namespace std;
vector<int> spiral(vector<int> v[],int a,int b)
{
	std::vector<int> v1;
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
			v1.push_back(v[i][j]);
	return v1;
}
int main()
{
	std::vector<int>z;
	int a,b;
	cin>>a>>b;
	std::vector<int> v[a];
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
		{
			int input;
			cin>>input;
			v[i].push_back(input);
		}
	z=spiral(v,a,b);
	a=z.size();
	for(int i=0;i<a;i++)
		cout<<z[i]<<" ";		
	cout<<endl;
}