#include "E:\Coding embedded\CPP 2022\5am\0505\Header\calc.h"

int sum(int *arr,int n)
{
    int s = 0;
    for (int i=0; i<n ;i++)
    s+=arr[i];
    return s;
}

//tìm số lớn nhất trong mảng
int max(int *arr, int n)
{
    int m = arr[0];
    for (int i=1; i <n;i++)
    {
      if   (arr[i]>m)
      m = arr[i];
    }
    return m;
}

//tìm số nhỏ nhất trong mảng
int min(int *arr, int n)
{
    int m = arr[0];
    for (int i=1; i <n;i++)
    {
      if   (arr[i]<m)
      m = arr[i];
    }
    return m;
}
//tìm vị trí trong mảng
void index(int *arr, int n)
{   
    printf("what input parameter do U want to find:\n");
    int num;
    int count = 0;
    scanf("%d",&num);

    for (int i=0; i <n;i++)
    {
      if  (arr[i]== num)
      {count+=1;
      printf(" Số %d xuat hien o vi tri %d \n",num,i);
      }
    }
      printf("Số lần xuất hiện là: %d \n",count);
}
