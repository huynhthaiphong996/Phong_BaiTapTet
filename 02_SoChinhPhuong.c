#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    float temp1,temp2;
    printf("Nhap n:");
    scanf("%d",&n);
    temp1 = (float)sqrt(n);
    temp2 = (int)sqrt(n);
    if(temp1!=temp2) printf("\n%d khong phai so chinh phuong.",n);
    else printf("\n%d la so chinh phuong.",n);

}
