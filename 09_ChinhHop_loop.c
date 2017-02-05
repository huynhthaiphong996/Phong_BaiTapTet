#include <stdio.h>
void main()
{
    int n,k,A;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nNhap k:");
    scanf("%d",&k);
    if(n<1) printf("\nKhong hop le.");
    else
    {
        A = giaithua(n)/giaithua(n-k);
    }
    printf("\n%dA%d = %d",k,n,A);
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

