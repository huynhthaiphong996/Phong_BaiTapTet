#include <stdio.h>
#include <math.h>
void main()
{
    int u ,r, n,s=0;
    printf("Nhap so hang dau tien:");
    scanf("%d",&u);
    printf("\nNhap cong boi:");
    scanf("%d",&r);
    printf("\nNhap n so hang:");
    scanf("%d",&n);

    printf("\nTong cap so nhan: %d",capsonhan(n,r,u,s));


    printf("\n-------------------------\n");

    int a,d,m,c=0;

    printf("\nNhap so hang dau tien:");
    scanf("%d",&a);
    printf("\nNhap cong sai:");
    scanf("%d",&d);
    printf("\nNhap n so hang:");
    scanf("%d",&m);

    printf("\nTong cap so cong: %d",capsocong(m,d,a,c));

}

int capsocong(int m, int d, int a,int c)
{
    if(m==0) return c;
    else
    {
        c+= (a + d*(m-1));
        capsocong(m-1,d,a,c);
    }
}

int capsonhan(int n,int r,int u,int s)
{
    if(n==0) return s;
    else
    {
        s+=u*pow(r,n-1);
        capsonhan(n-1,r,u,s);
    }

}
