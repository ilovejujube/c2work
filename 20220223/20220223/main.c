//
//  main.c
//  20220223
//
//  Created by jujube on 2022/2/23.
//

#include <stdio.h>

#define PI 3.1415    //定义常量，结束时无分号！！

int main(int argc, const char * argv[]) {

    //圆的面积  s = PI * r * r
    //圆的周长  l = 2 * PI * r
    int r = 3;

    float s = PI * r * r;

    float l = 2 * PI * r;

    printf("圆的周长: %.2f\n", l);
    printf("圆的面积: %.2f\n", s);
    
    return 0;
}
