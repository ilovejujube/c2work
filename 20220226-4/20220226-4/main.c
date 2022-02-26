//
//  main.c
//  20220226-4
//
//  Created by jujube on 2022/2/26.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    char dst[100] = { 0 };
//    int a = 10;
//    char src[] = "hello world";
//    printf("a = %d, src = %s", a, src);
//    printf("\n");
//
//    int len = sprintf(dst, "a = %d, src = %s", a, src);
//    printf("dst = \" %s\"\n", dst);
//    printf("len = %d\n", len);
    
    char str[] = "ww$w.bai$du. co n.111$cb";
    char *p = strtok(str, " .$"); //拆分”:将分割字符用 '\0'替换。
    //trtok拆分字符串是直接在 原串 上操作，所以要求参1必须，可读可写,常量不可取
    
    while (p) {
        p = strtok(NULL, " .$");
        printf("p = %s\n", p);
    }
    
    
    
    return 0;
}
