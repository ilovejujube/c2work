//
//  main.c
//  20220226-2
//
//  Created by jujube on 2022/2/26.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char dest[20] ;
    char src[] = "hello world";

    strncpy(dest, src, 5);
    printf("%s\n", dest);

    dest[5] = '\0';
    printf("%s\n", dest);
    
//    char src[] = "abc s d e  g gw3afndkjagrag";
//    char dst[100] = {0};
//
//    char *p = strcpy(dst, src); //酱src拷贝给dst，返回凯拷贝后字符串的首地址，不安全
//
//    printf("p = %s\n", p);
//    printf("dst = %s\n", dst);
    
    return 0;
}
