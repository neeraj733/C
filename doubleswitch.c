#include<stdio.h>
void main()
{
	int main_choice,sub_choice;
	int a,b;
	printf("ENTER TWO NUMBERS;");
	scanf("%d %d",&a,&b);
	switch(main_choice)
	{
	printf("select one of the following\n 1.arthmetic operator\n 2.relational operation\n 3.bitwise operator");
	scanf("%d",&main_choice);
    }
	switch(main_choice)
	{
		case 1:
		    printf("choose one of the following arthmetic operation\n1.+\n2.-\n3.*\n4./\n5.%%");
		    scanf("%d",&sub_choice);
		switch(sub_choice)
		{
			case 1:
			printf("%d+%d=%d",a,b,a+b);
			break;
			case 2:
			printf("%d-%d=%d",a,b,a-b);
			break;
			case 3:
			printf("%d*%d=%d",a,b,a*b);
			break;
			case 4:
			printf("%d/%d=%d",a,b,a/b);
			break;
			case 5:
			printf("%d %% %d=%d",a,b,a%%b);
       	}
	
																													}                                                                                                                
}
