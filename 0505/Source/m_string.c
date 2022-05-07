#include "E:\Coding embedded\CPP 2022\5am\0505\Header\m_string.h"

//nhap mang

void NhapMang(int a[], int n){
    for(int i = 0;i < n; i++)
    {
        printf("\nNhap phan tu thu [%d] = ", i);
        scanf("%d", &a[i]);
    }
}

// xuat mang
void xuatmang(int a[], int n){
    for(int i = 0;i < n; i++)
    {
        printf("\nphan tu thu [%d] = %d", i, a[i]);
    }
}
//so sanh hai mang
void sosanh(int a[],int b[],int n)
{
    for (int i = 0; i< n; i++)
    {
        if (a[i] != b[i])
        printf("Different!!!\n");
        break;
    }
    printf("Same!!!\n");
}

// nhap vị tri
void insert(int a[], int n)
{
    int x,y;
    printf("Nhap vi tri muon chen: \n");
    scanf("%d",&x);
    printf("Nhap so muon chen: \n");
    scanf("%d",&y);
    for(int i = n;i>=x; i--)
    a[i]=a[i-1];
    a[x]= y;
}
