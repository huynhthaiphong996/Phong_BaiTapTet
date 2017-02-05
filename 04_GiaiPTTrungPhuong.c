#include <stdio.h>
#include <math.h>
void giaiptbachai(float a, float b, float c,float t[],float x[]);

void main()
{
    int i=0,dem=0;
    float a, b, c;
    float x[4],t[2];
    printf("Nhap a,b,c:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

     if(a==0 && b!=0)
    {
        if(c>0)printf("\nPhuong trinh vo nghiem.");
        else if(c<0)
            {
                t[0] = -c/b;
                x[0] = sqrt(t[0]);
                x[1] = -sqrt(t[0]);
                printf("\nPhuong trinh co 2 nghiem: x1=%0.2f\tx2=%0.2f",x[0],x[1]);

            }

    }
    else if( a==0 && b==0 && c!=0)
    {
            printf("\nPhuong trinh vo nghiem.");
    }
    else if(a==0 && b==0 && c==0)
    {
        printf("\nPhuong trinh co vo so nghiem.");
    }else{

      giaiptbachai(a,b,c,t,x);

      printf("\nket qua: t1 = %0.2f\nt2 = %0.2f",t[0],t[1]);

        if(t[0]<0 && t[1]<0) printf("\nPhuong trinh vo nghiem.");
       else if(t[0] == t[1] && t[0]>0)
       {
                x[i]=sqrt(t[0]);
                i++;
                x[i] = - sqrt(t[0]);
                i++;
                dem+=2;
                printf("\nNghiem cua phuong trinh la:");
                 for(i=0;i<dem;i++)
            {
                printf("\nx%d = %0.2f",i+1,x[i]);
            }
       }
       else{

            if(t[0]>=0)
            {
                x[i]=sqrt(t[0]);
                i++;
                x[i] = -sqrt(t[0]);
                i++;
                dem+=2;
            }

             if(t[1]>=0)
            {
                x[i]=sqrt(t[1]);
                i++;
                x[i] = -sqrt(t[1]);
                dem+=2;
            }
            printf("\nNghiem cua phuong trinh la:");
            for(i=0;i<dem;i++)
            {
                printf("\nx%d = %0.2f",i+1,x[i]);
            }

       }

    }



}

void giaiptbachai(float a, float b, float c,float t[],float x[])
{
    float delta;
    int dem=0,i=0;

        delta = b*b - 4*a*c;
        if(delta>0)
        {
            t[0] = (float)(-b-sqrt(delta))/(2*a);
            t[1] = (float)(-b+sqrt(delta))/(2*a);
        }
        else if(delta==0)
        {
            t[0] = t[1] = (float)-b/(2*a);
        }
        else {
                printf("\nPhuong trinh vo nghiem.");
                //return 0;
        }
}
