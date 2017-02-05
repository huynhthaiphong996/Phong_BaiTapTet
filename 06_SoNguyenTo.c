#include <stdio.h>
void main()
{
    int i,dem,n;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            printf("\n%d khong phai so nguyen to.",n);
            return;
        }
    }
    printf("\n%d la so nguyen to.",n);
}
