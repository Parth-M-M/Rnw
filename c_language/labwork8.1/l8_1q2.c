#include <stdio.h>

int main() {
    int n,avg=0,cnt=0;
    printf("Enter array size:");
    scanf("%d",&n);
    int b[n];
    printf("Enter data for array: ");
    for(int i = 0 ;i < n;i++)
    {
        scanf("%d",&b[i]);
        avg = b[i] + avg ;
        cnt++;
    }
    avg = avg/cnt;
    printf("The size of array is : %d ",avg);
    
    return 0;
}
