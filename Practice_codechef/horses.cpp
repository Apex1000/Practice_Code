#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
using namespace std;
#define mod 1000000007
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long N;
		cin>>N;
		long S[N];
		for(int i=0;i<N;i++)
			cin>>S[i];
		sort(S,S+N);
		int s=mod;
		for(long i=1;i<N;i++)
		{
			if(s>(S[i]-S[i-1]))
				s=S[i]-S[i-1];
		}
		cout<<s<<endl;
	}
}