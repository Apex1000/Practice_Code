#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
long arr[MAX+5];
int big=2;
int prime(int z)
{
	// if(z==2){
	// 	arr[2]++;
	// 	if(big<2)
	// 		big=2;
	// 	prime(z/2);
	// }
	// if(z==3){
	// 	arr[3]++;
	// 	if(big<3)
	// 		big=3;
	// 	prime(z/3);
	// }
	// if(z==5){
	// 	arr[5]++;
	// 	if(big<5)
	// 		big=5;
	// 	prime(z/5);
	// }
	// if(z==7){
	// 	arr[7]++;
	// 	if(big<7)
	// 		big=7;
	// 	prime(z/7);
	// }
	// else
	//{
		//{
			for(int i=2;i<=z;i++){
				if(z%i==0)
				{
					arr[i]++;
					//cout<<i;
					if(i>big)
						big=i;
					z=z/i;
					i=1;
				}
			}
		//}
	//}
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		memset(arr,0,MAX+1);
		big=1;
		long N,c=1;
		cin>>N;
		for(int i=0;i<N;i++){
			int z;
			cin>>z;
			prime(z);
		}
		for(int i=1;i<=big;i++){
			if(arr[i]>0)
				c*=(arr[i]+1);
		}
		cout<<c<<endl;
	}
}