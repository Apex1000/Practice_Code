#include <bits/stdc++.h>
#define lint long long int
using namespace std;
int main()
{
	lint T;
	cin>>T;
	while(T--)
	{
		lint L,D,S,C,tmp,i;
		cin>>L>>D>>S>>C;
			for ( i = 2, tmp = S; i <= D; i++) {
            tmp = tmp + tmp * C;
            if (tmp >= L)
                break;
        }
		cout<<(tmp>=L?"ALIVE AND KICKING":"DEAD AND ROTTING");
		cout<<endl;
	}
}