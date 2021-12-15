#include<stdio.h>
void main()
{
	int a;
	printf("ENTER A MONTH NUMBER");
	scanf("%d",&a);
	switch(a)
	{
				case 1:
			printf("this month is january");
			break;
				case 2:
			printf("this month is february");
			break;
				case 3:
			printf("this month is march");
			break;
				case 4:
			printf("this month is april");
			break;
				case 5:
			printf("this month is may");
			break;
				case 6:
			printf("this month is june");
			break;
				case 7:
			printf("this month is july");
			break;
				case 8:
			printf("this month is august");
			break;
				case 9:
			printf("this month is september");
			break;
				case 10:
			printf("this month is october");
			break;
				case 11:
			printf("this month is november");
			break;
				case 12:
			printf("this month is december");
			break;
			default:
			printf("invalid input");
	}
}
