#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	pritnf("unsigned:%d to %hu",0,USHRT_MAX);
	printf("int:\nsigned:%d to %d\n",INT_MIN,UINT_MAX);
	printf("unsigned:%u to %u",0,UINT_MAX);
	printf("long int:\nsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
	print("unsigned:%lu",0,ULONG_MAX);
	printf("long long int:\nsigned:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("unsigned:%u to %llu",0,LONG_LONG_MAX);
}
