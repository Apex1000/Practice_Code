#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int no;
    cin>>no;
    while(no--)
    {
        int a[5],a1[2]={0},b[2],b1[2]={0};
        for(int i=0;i<4;i++)
            cin>>a[i];
        for(int i=0;i<2;i++)
            cin>>b[i];
        for(int j=0;j<2;j++)
        {
            for(int i=0;i<4;i++)
            {
                if(b1[j]==0)
                {
                    if(b[j]==a[i])
                    {
                        a1[i]=1;
                        b1[j]=1;
                    }
                }
            }
        }
        int sum=1;
        for(int i=0;i<4;i++)
        {
            if(a1[i]==0)
            {
                sum=sum*a[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
