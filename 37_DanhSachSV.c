#include <stdio.h>
#include <string.h>
void main()
{
    struct HoSo{
    char hoten[40];
    float diem;
    char loai[15];
    };

    int i,n;

    printf("Nhap vao so sinh vien:");
    scanf("%d",&n);
    struct HoSo hososv[n];

    for(i=0;i<n;i++)
    {
        printf("\n-Nhap thong tin sv %d:",i+1);
        printf("\n\tHo ten sv[%d]:",i+1);
        fflush(stdin);
        gets(hososv[i].hoten);
        printf("\n\tdiem:");
        scanf("%f",&hososv[i].diem);
    }

    for(i=0;i<n;i++)
    {
        if(hososv[i].diem>10) strcpy(hososv[i].loai,"Khong hop le");
        else if(hososv[i].diem>=9 && hososv[i].diem<=10) strcpy(hososv[i].loai,"Gioi");
        else if(hososv[i].diem>=7 && hososv[i].diem<9) strcpy(hososv[i].loai,"Kha");
        else if(hososv[i].diem>=5 && hososv[i].diem<7) strcpy(hososv[i].loai,"Trung Binh");
        else if(hososv[i].diem>=0 && hososv[i].diem<5) strcpy(hososv[i].loai,"Khong Dat");
        else strcpy(hososv[i].loai,"Khong hop le");
    }


    printf("\n--------------\n\t\tXEP LOAI VAN HOA");
    printf("\nHO VA TEN\t\tDIEM\t\tXEP LOAI");
     for(i=0;i<n;i++)
     {
         printf("\n%s\t\t%0.3f\t\t%s",hososv[i].hoten,hososv[i].diem,hososv[i].loai);
     }

}
