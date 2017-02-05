#include <stdio.h>
#include <malloc.h>
#include <string.h>
void main()
{
    int i,j;
    char *a = (char*)malloc(50*sizeof(char));
    char *b = (char*)malloc(50*sizeof(char));

    printf("Nhap chuoi a:");
    gets(a);
    printf("Nhap chuoi b:");
    gets(b);

    i = strstr(a,b);
    if(i!=NULL)
    printf("\n-------------\nCo su xuat hien cua chuoi b trong chuoi a.");
    else printf("\n-------------\nKhong co su xuat hien cua chuoi b trong chuoi a.");
}
