//
//  main.c
//  20220223-2
//
//  Created by jujube on 2022/2/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //sizeof的返回值为size_t，size_t类型在32位操作系统下是unsigned int，是一个无符号的整数, 在64位操作系统下是unsigned long，是一个无符号长整型
    size_t var= 10;
    
    short a = 10;
    int b = 10;
    long c = 10l; //或者10L
    long long d = 10ll; //或者10LL

    printf("sizeof(a) = %lu\n", sizeof(a));
    printf("sizeof(b) = %lu\n", sizeof(b));
    printf("sizeof(c) = %lu\n", sizeof(c));
    printf("sizeof(c) = %lu\n", sizeof(d));

    printf("short a = %hd\n", a);
    printf("int b = %d\n", b);
    printf("long c = %ld\n", c);
    printf("long long d = %lld\n", d);

    unsigned short a2 = 20u;
    unsigned int b2 = 20u;
    unsigned long c2= 20ul;
    unsigned long long d2 = 20ull;

    printf("unsigned short a = %hu\n", a2);
    printf("unsigned int b = %u\n", b2);
    printf("unsigned long c = %lu\n", c2);
    printf("unsigned long long d = %llu\n", d2);
    
//    //输出格式若为%d，则报错Format specifies type 'int' but the argument has type 'unsigned long'， 修改为%lu可解决，long unsigned数据类型无符号长整数或无符号长浮点数
//    //sizeof关键字：不是函数。用来求一个变量、类型的大小。 返回一个 无符号整数。 使用 %u 接收返回值。
//    printf("int大小：%lu\n", sizeof(int));
//    printf("short大小：%lu\n", sizeof(short));
//    printf("long大小：%lu\n", sizeof(long));
//    printf("long long大小：%lu\n", sizeof(long long));
    
    
    return 0;
}
