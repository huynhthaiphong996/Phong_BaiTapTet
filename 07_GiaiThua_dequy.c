#include <stdio.h>
void main()
{
    int n,S=1;
    printf("Nhap n:");
    scanf("%d",&n);
    S = giaithua(n,S);
    printf("\n%d!= %d",n,S);
}

int giaithua(int n,int S)
{
    if(n==1)
        return S;
    else
    {
        S*=n;
        giaithua(n-1,S);
    }
}
