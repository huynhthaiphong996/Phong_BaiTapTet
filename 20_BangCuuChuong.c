#include <stdio.h>
void main()
{
    int n;
    printf("Nhap bang cuu chuong can hien:");
    scanf("%d",&n);
    if(n>9 || n<1) printf("\nNhap sai");
    else
    {
        printf("\nBang cuu chuong %d:",n);
        bangcuuchuong(n);
    }
}

void bangcuuchuong(int n)
{
    int i;
    for(i=1;i<11;i++)
    {
        printf("\n%dx%d=%d",n,i,n*i);
    }
}
