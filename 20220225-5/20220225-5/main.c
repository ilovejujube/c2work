//
//  main.c
//  20220225-5
//
//  Created by jujube on 2022/2/25.
//

#include <stdio.h>

int mystrcmp(char *str1, char *str2);

int main(int argc, const char * argv[]) {
    
//    char str1[] = "hello";  //可用 str1[0] 修改
    char *str1 = "hellow";
    char *str2 = "hello";   //字符串常量，不可被修改，只读
    
    int ret = mystrcmp(str1, str2);
    
    if (ret == 0) {
        printf("same\n");
    } else if (ret == 1) {
        printf("str1 is bigger than str2\n");
    } else {
        printf("str1 is smaller than str2\n");
    }
    
    return 0;
}

int mystrcmp(char *str1, char *str2)
{
    while (*(str1++) == *(str2++))   // *(str1+i) == *(str2+i)
    {
        if (*str1 == '\0')
        {
            return 0;            // 2字符串一样。
        }
//        str1++;
//        str2++;
    }
    return *str1 > *str2 ? 1 : -1;
}
