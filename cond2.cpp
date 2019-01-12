#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter Three Number");
	scanf("%d,%d,%d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("%d is Largest",&a);
	}
	if(a>b && a>c)
	{
		printf("%d is Largest",&a);
	}
	if(c>a && c>a)
	{
		printf("%d is Largest",&b);
	}
	if(a==b && b==c)
	{
		printf("All Are Equal");
	}
	
}
