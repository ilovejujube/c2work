//
//  main.c
//  20220224
//
//  Created by jujube on 2022/2/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //逗号表达式
    int a = 10, b = 20, c = 30;
    //下列先进行括号内运算，括号内从左到右依次赋值，m等于最后一个表达式的值
    int m = (a = 1, b = 2, c = 3);
    
    printf("m = %d\n", m);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    return 0;
}
