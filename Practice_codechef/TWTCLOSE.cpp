#include <bits/stdc++.h>
#include <string.h>
#include <cstdio>
#include <cstdlib>
#include <set>
using namespace std;
int main()
{
	int N,K;
	cin>>N>>K;
	bool arr[N+1]={0};
	memset(arr,false,N);
	cin.ignore();
	for(int i=0;i<K;i++)
	{
		int c=0;
		string s;
		getline(cin,s);
		char z=s[6];
		//cout<<z;
		int aa=((int)s[6])-48;
		int aa1=((int)s[7])-48;
		int aa2=((int)s[8])-48;
		int aa3=((int)s[9])-48;
		if( aa>=1 && aa1>=0 && aa2>=0 && aa3>=0)
			aa=(aa3)+(aa2*10)+(aa1*100)+(aa*1000);
		else if(aa>=1 && aa1>=0 && aa2>=0)
			aa=(aa2)+(aa1*10)+(aa*100);
		else if(aa>=1 && aa1>=0)
			aa=(aa1)+(aa*10);
		else if(aa>=1)
			aa=aa;
		if(z=='L' || z=='l')
		{
			memset(arr,false,N+1);
			//c=0;
		}
		else if(arr[aa]==false)
		{
			arr[aa]=true;
			//c++;
		}
		else if(arr[aa]==true)
		{
			arr[aa]=false;
			//c--;
		}
		for(int i=0;i<=N;i++){
			//cout<<arr[i]<<" ";
			if(arr[i])
				c++;
		}	
		cout<<c<<endl;
	}
}