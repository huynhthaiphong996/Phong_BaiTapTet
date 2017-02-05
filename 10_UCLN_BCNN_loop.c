#include <stdio.h>

void main()
{
    int i,j,ucln,bcnn,a,b;
    printf("\nNhap a,b :");
    scanf("%d",&a);
    scanf("%d",&b);

    if(a==0 || b==0 )
    {
        printf("\nUCLN = %d\nBCNN = %d",a+b,0);
        return;
    }
    else
    {
            for(i=1;i<=a && i<=b;i++)
            {
                if(a%i==0 && b%i==0)
                   ucln = i;
            }


         printf("\nUCLN = %d",ucln);
        printf("\nBCNN = %d",(a*b)/ucln);

    }

}
