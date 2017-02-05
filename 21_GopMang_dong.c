#include <stdio.h>
#include <malloc.h>
void main()
{
    int *a,*b,*c;
    int n,m,k;
    int i,j;
    printf("\nNhap so phan tu day a:");
    scanf("%d",&n);
    a = (int*)malloc(n*sizeof(int));
    nhapmang(a,n,'a');

    printf("\nNhap so phan tu day b:");
    scanf("%d",&m);
    b = (int*)malloc(m*sizeof(int));
    nhapmang(b,m,'b');

    printf("\nDay a:");
    inday(a,n);
    printf("\n-----------\nDay b:");
    inday(b,m);

    k=m+n;
    c = (int*)malloc(k*sizeof(int));
    for(i=0;i<n;i++)
    {
        *(c+i) = *(a+i);
    }
    for(j=0;j<m;j++)
    {
        *(c+j+n) = *(b+j);
    }
    printf("\n-------\nDay c:");
    inday(c,k);

    sapxep(c,k);
    printf("\n-------------------\nDay c da sap xep:");
    inday(c,k);

}

void nhapmang(int *a,int n,char c)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu %c[%d]:",c,i+1);
        scanf("%d",a+i);
    }
}

void inday(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
}


void sapxep(int *a, int n)
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min = *(a+i);

        for(j=i+1;j<n;j++)
        {
            if(min > *(a+j))
            {
                *(a+i) = *(a+j);
               *(a+j) = min;
                min = *(a+i);
            }
        }
    }
}

