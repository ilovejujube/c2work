//
//  main.c
//  20220225-2
//
//  Created by jujube on 2022/2/25.
//
#include "Header.h"


int main(int argc, const char * argv[]) {
    
    //拼接字符串
    char str1[] = "hello";
    char str2[] = "world";
    
    char str3[100] = {0};
    
    int i = 0;        // 循环 str1
    while (str1[i] != '\0')
    {
        str3[i] = str1[i];  // 循环着将str1中的每一个元素，交给str3
        i++;
    }                    // str3=[h e l l o]
    //printf("%d\n", i);  --> 5

    int j = 0;        // 循环 str2
    while (str2[j]) // 等价于 while(str2[j] !='\0') 等价于 while (str2[j] != 0)
    {
        str3[i++] = str2[j];
        j++;
    }                    // str3=[h e l l o w o r l d]

    // 手动添加 \0 字符串结束标记
    str3[i] = '\0';
    
    printf("%s\n", str3);
    
    printf("%d\n", max(3, 4));
    
    return 0;
}
