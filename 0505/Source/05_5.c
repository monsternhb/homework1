/* =============
                    Tạo 3 thư viện:

                    tối thiểu của mảng là 20 phần tử

                    1 Calc.c

                    tính tổng của nhiều số
                    tìm số lớn nhất mảng
                    tìm số nhỏ nhất mảng
                    tìm vị trí trong mảng

                    2 Convernt.c
                    Nhập vào 1 số tự nhiên (10)
                    convernt 10 - nhị phân 0bxxxxxxxxx
                    10 hex 0x01

                    3 m_string.c
                    
                    so sanh 2 mang
                    chen vi tri                             **/

#include<stdio.h>
#include "..\Header\calc.h"
#include "..\Header\convert.h"
#include "..\Header\m_string.h"

int main(int arg, char const *argv[])
{   
    
    // thao tác với array
    int arr[]={1,2,3,4,56,4,2,1,5,6,5,1,1,6,7,8,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Sum = %d \n",sum(arr,n));
    printf("Max = %d \n",max(arr,n));
    printf("Min = %d \n",min(arr,n));
    index(arr,n);

    //thao tác với hệ số num
    int num = 0;
    num =nhapso(num);
    int a[100];
    D2B(num, a);
    D2H(num);

    // thao tác với mảng
    int mang1[100];
    int mang2[100];
    printf("How many element?\n");
    scanf("%d",&n);
    NhapMang(mang1,n);
    NhapMang(mang2,n);
    sosanh(mang1,mang2,n);

    //chen vo mang 1
    insert(mang1,n);
    xuatmang(mang1,n);
    return 0;
}
