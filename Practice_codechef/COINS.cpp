#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>
#include <climits>
#include <cstdlib>
using namespace std;
map <int , long long int> dp;
int maxx(long long int n)
{	
	long long int t;
	if(n==0)
		return 0;
	if(dp[n]>0)
		return dp[n];
	t=maxx(n/2)+maxx(n/3)+maxx(n/4);
	dp[n] = max(n,t);
	return dp[n];
}
int main()
{
	long long int n,t;
	while(scanf("%lld",&n)>0)
	{
		cout<<maxx(n)<<endl;
	}
}