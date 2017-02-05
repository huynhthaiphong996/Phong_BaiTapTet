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
        C = giaithua(n,1)/(giaithua(k,1)*giaithua(n-k,1));
    }
    printf("\n%dC%d = %d",k,n,C);
}

int giaithua(int n, int s)
{
    if(n==1) return s;
    else
    {
        s*=n;
        giaithua(n-1,s);
    }
}
