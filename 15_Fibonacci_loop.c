#include <stdio.h>
void main()
{
    int n,i,a[50];
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nDay fibonacci: ");
    a[0]=a[1]=1;
    for(i=0;i<n;i++)
    {
        if(i==0 || i==1 )
            {
                printf("%d ",a[i]);
            }
        else
            {
                a[i] = a[i-1]+a[i-2];
                printf("%d ",a[i]);
            }
    }
}
