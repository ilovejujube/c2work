//
//  main.c
//  20220224-5
//
//  Created by jujube on 2022/2/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[10] = {1, 2, 23, 4, 5, 6 , 10, 7, 8, 9};
    int arr1[10] = {1, 2, 3}; //初始化前三个成员，后面所有元素都设置为0
    int arr2[10] = {0}; //所有的成员都设置为0
    int arr3[] = {1, 2, 3, 4, 5}; //编译器自动求取元素个数
    
    
    printf("数组首地址：%p\n", &arr[0]);
    printf("数组首地址：%p\n", arr);
    printf("数组大小：%lu\n", sizeof(arr));
    printf("数组元素的大小：%lu\n", sizeof(arr[0]));
    printf("数组元素个数：%lu\n", sizeof(arr)/ sizeof(arr[0]));
    
    
    return 0;
}
