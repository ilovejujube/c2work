//
//  main.c
//  20220224-7
//
//  Created by jujube on 2022/2/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int  i, j;
    int a[3][4] = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 }
    };
    
    //不完全初始化，未被初始化的值默认为零
    int arr1[3][5] = {{2, 3}, {2, 67, 4, }, {1, 4, 16, 78}};
    int arr2[3][5] = {0};  //全0的二维数组
    int arr3[3][5] = {2, 3, 2, 67, 4, 1, 4, 16, 78};   //【少见】 系统自动分配行列。
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
