#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	long N,D;
	std::vector<long> v;
	cin>>N>>D;
	for(long i=0;i<N;i++)
	{
		long input;
		cin>>input;
		v.push_back(input);
	}
	sort(v.begin(),v.end());
	long c=0;
	for(long i=0;i<N;)
	{
		if(v[i]>=v[i+1]-D && i+1<=N-1){
			c++;
			i+=2;
			//cout<<c<<endl<<i;
		}
		else
			i++;
	}
	cout<<c<<endl;
}