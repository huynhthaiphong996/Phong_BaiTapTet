#include <stdio.h>
#include <malloc.h>
void main()
{
    int i,n,*a,min,max;
    printf("Nhap so phan tu:");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",a+i);
    }
    min =  max = a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i]) min = a[i];
        if(max<a[i]) max = a[i];
    }
    printf("\nGTLN = %d\nGTNN = %d",max,min);

}
