//
//  main.c
//  20220226-5
//
//  Created by jujube on 2022/2/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //申请空间，在堆上
    int *p = (int *)malloc(sizeof(int) * 10);
    
    if (!p) {
        printf("malloc error!\n");
        return -1;
    }
    //写数据
    
    char *tmp = p;
    
    int i;
    for (i = 0; i < 10; i++) {
        *(p+i) = i;
    }
    //读数据
    for (i = 0; i < 10; i++) {
        printf("%d ", *(p+i));
    }
    puts(""); //回车
    
    //释放空间
    free(tmp); // free 地址必须 是 malloc申请地址。否则出错。所以不能使用p++这样的，否则进行临时变量备份初始地址
    p = NULL;
    
    return 0;
}
