#include <stdio.h>
#include <malloc.h>
void main()
{
    int *a,n,i,j,dem=1;
    int tren,duoi,trai,phai;
    printf("Nhap cap ma tran:");
    scanf("%d",&n);
    a = (int*)malloc((n*n)*sizeof(int));

    tren = trai =0;
    duoi = phai = n-1;

    while(dem<=(n*n))
    {

        for(i=trai;i<=phai;i++)
        {
            *(a+tren*n+i) = dem;
            dem++;
        }
        tren++;
        for(i=tren;i<=duoi;i++)
        {
            *(a+i*n+phai) = dem;
            dem++;
        }
        phai--;
        for(i=phai;i>=trai;i--)
        {
            *(a+duoi*n+i) = dem;
            dem++;
        }
        duoi--;
        for(i=duoi;i>=tren;i--)
        {
            *(a+i*n+trai) = dem;
            dem++;
        }
        trai++;
    }

    printf("\nMa tran xoan oc cap %d:\n",n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(a+i*n+j));
        }
        printf("\n");
    }
}

