//
//  main.c
//  20220226-3
//
//  Created by jujube on 2022/2/26.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    char str[20] = "123";
//    char *src = "hello world";
//
//    printf("%s\n", strcat(str, src));  //str = str + src,需要保证str空间足够大
//    printf("%s\n", strncat(str, src, 5));

    char *str1 = "hello world";
        char *str2 = "hello mike";

    if (strcmp(str1, str2) == 0)
    {
        printf("str1==str2\n");
    }
    else if (strcmp(str1, str2) > 0)
    {
        printf("str1>str2\n");
    }
    else
    {
        printf("str1<str2\n");
    }
    
    return 0;
}
