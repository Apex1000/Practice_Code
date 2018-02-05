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
int main()
{
	string arr[124],input;
	int i=0;
	while(1)
	{
		string input;
		cin>>input;
		if(input=="END")
			break;
		arr[i]=input;
		i++;
	}
	string a,b;
	cin>>a>>b;
	int z=a.size();
	int x=b.size();
	int y=abs(x-z);
	int q;
	if(z>x)
		q=x;
	else
		q=z;
	for(int j=0;j<q;j++)
	{
		if(a[j]!=b[j])
			y++;
	}
	int e=0,t=0;
	for(int z=0;z<i;z++)
		if(a==arr[z])
			e++;
		if(b==arr[z])
			t++;
	if(t==e)
		cout<<y<<endl;
	else
		cout<<"-1"<<endl;

}