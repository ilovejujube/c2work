//
//  main.c
//  20220224-4
//
//  Created by jujube on 2022/2/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //打印99乘法表
    int i, j;
    //上三角
    for(i = 9; i >=1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d x %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }
    //下三角
    
//    for(i = 1; i < 10; i++) {
//        for(j = 1; j <= i; j++) {
//            printf("%d x %d = %d\t", i, j, i*j);
//        }
//        printf("\n");
//    }
    return 0;
}
