#include <stdio.h>
void main()
{
    int i,j,a[50][50],dem=1,n;
    printf("Nhap cap ma tran:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                a[i][j]= dem;
                printf("%d\t",a[i][j]);
                dem++;
        }
        printf("\n");
    }

}
