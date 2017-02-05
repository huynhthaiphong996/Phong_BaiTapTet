#include <stdio.h>
void main()
{
    int n,i;
    float s;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i++)
    {
      s += (1/(float)(i));
    }
    printf("Tong: %f",s);
}
