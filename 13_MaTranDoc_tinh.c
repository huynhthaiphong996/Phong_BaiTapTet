#include <stdio.h>
void main()
{
    int i,j,a[50][50],dem=1,n;
    printf("Nhap cap ma tran:");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
                a[i][j]= dem;
                dem++;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

}

