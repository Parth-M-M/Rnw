#include <stdio.h>

int main() {
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    int b[n];
    int c[n];
    printf("Enter data for array[a]: ");
    for(int i = 0 ;i < n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Enter data for array[b]: ");
    for(int i = 0 ;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array [c] is : ");
    for(int i = 0 ;i < n;i++)
    {
        c[i]=a[i]+b[i];
        printf(" %d ,",c[i]);
    }
    return 0;
}
