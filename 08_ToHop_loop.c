#include <stdio.h>
void main()
{
    int n,k,C;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nNhap k:");
    scanf("%d",&k);
    if(n<1) printf("\nKhong hop le.");
    else
    {
        C = giaithua(n)/(giaithua(k)*giaithua(n-k));
    }
    printf("\n%dC%d = %d",k,n,C);
}

int giaithua(int n)
{
    int i,s=1;
    for(i=2;i<=n;i++)
    {
        s*=i;
    }
    return s;
}
