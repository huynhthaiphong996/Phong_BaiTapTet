#include <stdio.h>

float tinhtong(int n, float s);

void main()
{
    int n;
    float s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nTong: %f",tinhtong(n,s));
}


float tinhtong(int n, float s)
{
    if(n==0) return (float)s;
    else
        {
            s += (float)(1/(float)(n));
            tinhtong(n-1,s);
        }
}
