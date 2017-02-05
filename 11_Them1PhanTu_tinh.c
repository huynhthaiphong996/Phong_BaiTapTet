#include <stdio.h>
void main()
{
    int i,n,k,l,a[50],temp1,temp2;
    printf("Nhap so phan tu cua mang:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nDay da nhap:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nNhap gia tri phan tu can chen:");
    scanf("%d",&k);
    printf("\nNhap vi tri can chen:");
    scanf("%d",&l);
    temp1 = a[l-1];
    for(i=l-1;i<n+1;i++)
    {

        temp2 = a[i+1];
        a[i+1]=temp1;
        temp1 = temp2;
    }
    a[l-1] = k;

     printf("\nDay sau khi chen:");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }

}
