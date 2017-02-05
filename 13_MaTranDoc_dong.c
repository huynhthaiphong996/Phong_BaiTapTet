#include <stdio.h>
#include <malloc.h>
void main()
{
    int dem=1,n,i,j,*p;
    printf("Nhap cap ma tran:");
    scanf("%d",&n);
    p = (int*)malloc((n*n)*sizeof(int));
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            *(p+n*i+j)=dem;

            dem++;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                printf("%d\t",*(p+n*i+j));
        }
        printf("\n");
    }


}

