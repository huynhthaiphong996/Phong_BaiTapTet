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
        A = giaithua(n,1)/giaithua(n-k,1);
    }
    printf("\n%dA%d = %d",k,n,A);
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

