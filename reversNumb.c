#include<stdio.h>
void main()
{
	int n=789,r,rev=0 ;
	while(n=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("%d\n",rev);
}
