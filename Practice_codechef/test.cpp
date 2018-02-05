#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	char z='1';
	z = ((z-'0')+1)%10+'0';
	printf("%c\n",z);
}