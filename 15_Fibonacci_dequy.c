#include <stdio.h>
void main()
{
    int i,n,a[50];
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nDay fibonacci:");
    for(i=0;i<n;i++)
    {
        printf("%d ",fibonacci(i));
    }
}

int fibonacci(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}
