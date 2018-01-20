#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> v[1000+5];
int arr[1010];
bool ar[1010];
int in=0;
void cycle(int s)
{
	while(!ar[s]){
		v[in].push_back(s);
		ar[s]=true;
		s=arr[s];
	}
	v[in].push_back(s);
	in++;
}
int main()
{
	int N;
	cin>>N;
	for(int i=1;i<=N;i++)
		cin>>arr[i];
	memset(ar,false,sizeof(ar));
	for(int i=1;i<=N;i++)
		if(!ar[i])
			cycle(i);
	cout<<in<<endl;
	for(int i=0;i<in;i++)
	{
		cout<<v[i][0]<<" ";
		for(unsigned int j=1;j<v[i].size();j++)
			cout<<v[i][j]<<" ";
		cout<<endl;
	}
}