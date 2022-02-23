//
//  main.c
//  20220223-3
//
//  Created by jujube on 2022/2/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char c = 'a'; 
    
    printf("%c\n", c);
    printf("%d\n", c);
    
    float a = 3.14;
    double b = 3.145;
    
    printf("%5.2f\n", a);
    printf("%lf\n", b);
    
    int A = 0x2C; // 16进制：以0x开头，每位 取 0-9/A-F/a-f；8进制： 零开头，每位数0~7之间。
    printf("56的十进制：%d\n",A);
    printf("56的8进制：%o\n",A);
    printf("56的16进制：%x\n",A);
    
    return 0;
}
