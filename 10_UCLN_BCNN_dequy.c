#include <stdio.h>
void main()
{
    int a,b;
    printf("Nhap a,b:");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==0 || b==0 )
    {
        printf("\nUCLN = %d\nBCNN = %d",a+b,0);
        return;
    }
    else{
        printf("UCLN = %d",ucln(a,b));
    printf("\nBCNN = %d",(a*b)/ucln(a,b));
    }

}

int ucln(int a,int b)
{
    int r;
    if(a<b)
    {
        r=a;
        a=b;
        b=r;
    }

    if(r=a%b)
    {
        a=b;
        b=r;
        return ucln(a,b);
    }
    return b;
}
