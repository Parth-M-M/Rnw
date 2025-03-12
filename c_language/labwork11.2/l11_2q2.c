#include <stdio.h>

int main() {
    int * ptr;
    int n;
    printf("Enter array size = ");
    scanf("%d",&n);
    int a[n];
    ptr = a;
    for(int i = 0 ; i < n ;i++)
    {
        printf("Enter Element a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("Square of each element is \n");
    for(int i = (n-1) ; i >= 0 ;i--)
    {   int square  = (*ptr + i)*(*ptr + i); 
        printf(" %d,",square);
    }

    return 0;
}


