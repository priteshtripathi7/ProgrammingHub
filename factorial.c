#include<stdio.h>
int fact(int n)
{	int f=n;
	if(n==0 || n==1)
		return 1;
	else return (f* fact(n-1));
}
main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
}