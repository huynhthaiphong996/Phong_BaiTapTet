#include <stdio.h>
void main()
{
    int n,m,i;
    printf("Nhap m:");
    scanf("%d",&m);
    printf("\nNhap n:");
    scanf("%d",&n);
    printf("\nDay cac so nguyen to tu %d den %d la:",m,n);
    for(i=m;i<=n;i++)
    {
        if(kiemtrasoNT(i)== 1) printf("%d ",i);
    }
}

int kiemtrasoNT(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
