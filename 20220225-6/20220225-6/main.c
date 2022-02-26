//
//  main.c
//  20220225-6
//
//  Created by jujube on 2022/2/25.
//

#include <stdio.h>

void mystrcpy(char *str1, const char *str2);

int main(int argc, const char * argv[]) {
    char *scr = "hello world";
    char dst[100] = {0}; //初始化后，默认每个位置都是'\0'
    
    mystrcpy(dst, scr);
    
    printf("%s\n", dst);
    
    return 0;
}

void mystrcpy(char *str1, const char *str2) {
    
    while (*(str2)) {
        *(str1++) = *(str2++);
    }
    *(str1) = '\0'; //最后一个要记得加
}
