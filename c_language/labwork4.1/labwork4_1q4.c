#include <stdio.h>

int main()
{	int x ;
	int y ;
	int z ;
	printf("Enter x :-");
	scanf("%d",&x);
	printf("Enter y :-");
	scanf("%d",&y);
	z = x ;
	x = y ;
    y = z ;
    
    printf("x is :- %d ",x);
    printf("y is :- %d ",y);
	return 0;
}