#include <stdio.h>

int main() {
    int n,cnt=0;
    printf("Enter array size:");
    scanf("%d",&n);
    int b[n];
    printf("Enter data for array: ");
    for(int i = 0 ;i < n;i++)
    {
        scanf("%d",&b[i]);
        cnt++;
    }
    printf("The size of array is : %d ",cnt);
    
    return 0;
}
