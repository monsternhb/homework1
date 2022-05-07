#include "E:\Coding embedded\CPP 2022\5am\0505\Header\convert.h"

//input number
int nhapso(int number)
{   
    do
    {
    printf("Moi ban nhap so: \n");
    scanf("%d",&number);
    }while(number<=0);
    return number;
}
//Dec2Bin
void D2B(int num, int a[])
{   int i = num, dem = 0;
    int du,nguyen =1;
    while(nguyen != 0)
    {   
        nguyen = i/2;
        du = i%2;
        a[dem]=du;
        dem++;
        i = nguyen;
    }
    printf("So %d chuyen sang nhi phan la: 0b",num);
    for (int j= (dem-1); j >= 0; j--)
    {
    printf("%d",a[j]);
    }
    printf("\n");
}

//Dec2hex
void D2H(int num)
{   
    printf("So %d chuyen sang hex la: 0x %x\n",num,num);
       
}