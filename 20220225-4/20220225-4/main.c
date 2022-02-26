//
//  main.c
//  20220225-4
//
//  Created by jujube on 2022/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
//    int d = 10;
//    int b = 20;
//    int c = 30;
//    //二级指针
//
//    int *arr[] = {&d, &b, &c}; // 数组元素为 整型变量 地址
//
    int d[] = { 10 };
    int b[] = { 20 };
    int c[] = { 30 };

    int *arr[] = { d, b, c }; // 数组元素为 数组 地址。
    //指针数组本质，是一个二级指针。
    //二维数组， 也是一个二级指针。
    
    
    int a = 0;
    int *p = &a;                 // 一级指针是 变量的地址。
    int **pp = &p;                //二级指针是 一级指针的地址。
    int ***ppp = &pp;            //三级指针是 二级指针的地址。
    int ****pppp = &ppp;           // 四级指针是 三级指针的地址。
    
    return 0;
}
