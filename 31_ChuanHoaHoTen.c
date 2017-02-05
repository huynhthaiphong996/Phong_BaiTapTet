#include <stdio.h>
#include <malloc.h>
#include <string.h>
void main()
{
    int i=0;
    char *a = (char*)malloc(50*sizeof(char));
    printf("Nhap ho ten:");
    gets(a);

    strupr(a);

    i++;

    strlwr(a+1);

    while(*(a+i)!=NULL)
    {
        if(isspace(*(a+i))!=0)
            {
               strupr(a+i+1);
               strlwr(a+i+2);
            }

        i++;
    }

    printf("\nHo va ten: %s",a);
}
