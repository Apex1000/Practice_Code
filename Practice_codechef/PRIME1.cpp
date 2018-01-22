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
#include <bits/stdc++.h>
using namespace std;
#define lint long long int
bool prime(lint x)
{
	if(x==2)
		return true;
	if(x%2==0)
		return false;
	if(x<2)
		return false;
	for(int i=3;i*i<=x;i+=2){
		if(x%i==0)
			return false;
	}
	return true;
}
int main()
{
	lint T,a,b;
	cin>>T;
	while(T--)
	{
		cin>>a>>b;
		lint i;
		i=a;
		while(i<=b)
		{
			if(prime(i)==true)
				cout<<i<<endl;
			i++;
		}
	}
}