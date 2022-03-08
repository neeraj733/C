#include<stdio.h>
void main()
{
	int n,r,sum=0,temp;
	printf("ENTER A NUMBER:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	printf("THIS IS AN ARMSTRONG NUMBER");
	else
	printf("THIS IS  NOT AN ARMSTRONG NUMBER");
}
