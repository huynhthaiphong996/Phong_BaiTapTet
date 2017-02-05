#include <stdio.h>
void main()
{
    int n,S=1,i;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        S*=i;
    }
    printf("\n%d!= %d",n,S);
}
