#include <stdio.h>
void main()
{
    int a[50],n,i,k,dem=0,j;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nDay da nhap:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nNhap gia tri can xoa:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            j=i;
            dichchuyen(a,n,j);
            dem++;
            i--;
        }
    }

    for(i=n-dem;i<n;i++)
    {
        a[i]=NULL;
    }

    printf("\n-------------\nDay sau khi xoa:");
    for(i=0;i<(n-dem);i++)
    {
        printf("%d ",a[i]);
    }
}

void dichchuyen(int a[],int n,int j)
{
    int i,temp1,temp2;
    temp1 = a[n-1];
    for(i=n-1;i>j;i--)
    {
        temp2 = a[i-1];
        a[i-1] = temp1;
        temp1 = temp2;
    }
}
