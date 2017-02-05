#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c;
    float delta, x1, x2;
    printf("Nhap a,b,c:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a==0 && b!=0)
    {
        printf("Phuong trinh la bac nhat va co nghiem:x= %f",-c/b);
    }
    else if( a==0 && b==0 && c!=0)
    {
            printf("\nPhuong trinh vo nghiem.");
    }
    else if(a==0 && b==0 && c==0)
    {
        printf("\nPhuong trinh co vo so nghiem.");
    }
    else
    {

        delta = b*b - 4*a*c;
        if(delta>0)
        {
            x1 = (float)(-b-sqrt(delta))/(2*a);
            x2 = (float)(-b+sqrt(delta))/(2*a);
            printf("\nPhuong trinh co 2 nghiem:\nx1 = %f\nx2 = %f",x1,x2);
        }
        else if(delta==0)
        {
            x1 = x2 = (float)-b/(2*a);
            printf("\nPhuong trinh co nghiem kep:\nx1= x2= %f",x1);
        }
        else printf("\nPhuong trinh vo nghiem.");

    }
}
