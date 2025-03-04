#include <stdio.h>
int array(int a)
{   int ar[a];
    int sum = 0;
    for(int i = 0 ; i <a;i++)
    {
        printf("Enter Element[%d]:",i);
        scanf("%d",&ar[i]);
        sum= sum +ar[i];
        
    }
    printf("The sum of array is : %d",sum);
}
int main() {
    int n ;
    printf("Enter array size :");
    scanf("%d",&n);
    array(n);

    return 0;
}
