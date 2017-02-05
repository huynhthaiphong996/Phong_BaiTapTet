#include <stdio.h>
#include <math.h>
void main()
{
    int u ,r, n,i,s=0,un;
    printf("Nhap so hang dau tien:");
    scanf("%d",&u);
    printf("\nNhap cong boi:");
    scanf("%d",&r);
    printf("\nNhap n so hang:");
    scanf("%d",&n);
    printf("\nTong cap so nhan:");
    for(i=0;i<n;i++)
    {
        un=u*pow(r,i);
        s+=un;
        if(i!=(n-1))
        printf("%d + ",un);
        else printf("%d = %d",un,s);
    }

    printf("\n-------------------------\n");

    int a,d,m,an,C=0;

    printf("\nNhap so hang dau tien:");
    scanf("%d",&a);
    printf("\nNhap cong sai:");
    scanf("%d",&d);
    printf("\nNhap n so hang:");
    scanf("%d",&m);
    printf("\nTong cap so cong:");
     for(i=0;i<n;i++)
    {
        an = a+i*d;
        C+=an;
        if(i!=(n-1))
        printf("%d + ",an);
        else printf("%d = %d",an,C);
    }
}
