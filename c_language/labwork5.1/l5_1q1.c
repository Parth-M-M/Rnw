#include <stdio.h>

int main()
{	int a ;
	int b ;
	printf("Enter first value :- ");
	scanf("%d",&a);
	printf("Enter first value :- ");
	scanf("%d",&b);
	if (a <= b)
	{
		printf(" %d is minimum value ",a);

	}
	else
	{
		printf(" %d is minimum value ",b);
	}
	return 0;
}
