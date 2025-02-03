#include <stdio.h>

int main()
{	int r ;
	printf("specify radius of the circle :- ");
	scanf("%d", &r);
	int a = 3.14*r*r;
	printf("area of circle is %d", a );
	return 0;
}