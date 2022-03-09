//
//  main.c
//  20220302
//
//  Created by jujube on 2022/3/2.
//

#include <stdio.h>

typedef union test {
    char ch;
    short sh;
    int a;
}test_t;

int main(int argc, const char * argv[]) {
    // insert code here...
    test_t obj;

    obj.a = 0x87654321;
//内部所有成员变量地址一致。等同于整个联合体的地址。
    printf("&obj    = %p\n", &obj);
    printf("&obj.ch = %p\n", &obj.ch);
    printf("&obj.sh = %p\n", &obj.sh);
    printf("&obj.a  = %p\n", &obj.a);
//    联合体的大小，是内部成员变量中，最大的那个成员变量的大小。
    printf("sizeof(test_t) = %u\n", sizeof(test_t));
//    修改其中任意一个成员变量的值，其他成员变量会随之修改
    printf("a  = 0x%x\n", obj.a);
    printf("sh = 0x%x\n", obj.sh);
    printf("ch = 0x%x\n", obj.ch);

    obj.ch = 0xFF;

    printf("a  = 0x%x\n", obj.a);
    printf("sh = 0x%x\n", obj.sh);
    printf("ch = 0x%x\n", obj.ch);

    
    return 0;
}
