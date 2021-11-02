#include<stdio.h>
void main()
{
     int a,b,sum,sub,mul,div,mdiv;
     a=7;
     b=7;
     sum=a+b;
     sub=a-b;
     mul=a*b;
     div=a/b;
     mdiv=a%b;
     printf("sum of %d and %d is %d:\n",a,b,sum);
     printf("sub of %d and %d is %d:\n",a,b,sub);
     printf("mul of %d and %d is %d:\n",a,b,mul);
     printf("div of %d and %d is %d:\n",a,b,div);
     printf("mdiv of %d and %d is %d:",a,b,mdiv);
}
