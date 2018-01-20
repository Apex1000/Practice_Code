#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long N,K,sum=0,sum1=0,sum3=0;
		cin>>N>>K;
		std::vector<long> v;
		for(long i=0;i<N;i++)
		{
			long input;
			cin>>input;
			v.push_back(input);
			sum3+=input;
		}
		sort(v.begin(),v.end());
		if(K>(N-K))
			K=N-K;
		for(long i=0;i<N;i++){
			if(i<K)
				sum+=v[i];
			else
				sum1+=v[i];
		}
		cout<<max(abs(sum-(sum3-sum)),abs(sum1-(sum3-sum1)))<<endl;
	}
}