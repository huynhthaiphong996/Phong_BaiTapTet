#include <stdio.h>
void main()
{
    int i,j,n,min;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nDay so chua sap xep:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        min = a[i];
        int k=i;
        for(j=i+1;j<n;j++)
        {

            if(min>a[j])
            {
                min = a[j];
                k=j;
            }

        }
        int temp;
        temp = a[i];
        a[i] = a[k];
        a[k] = temp;
    }

    printf("\nDay so da sap xep:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
