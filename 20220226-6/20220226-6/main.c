//
//  main.c
//  20220226-6
//
//  Created by jujube on 2022/2/26.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //二级指针对应的 heap空间
    //申请外层指针：
    int **p = (int **)malloc(sizeof(int *) * 10);
    
    //申请内层指针
    for (int i = 0; i < 10; i++) {
        *(p+i) = (int *)malloc(sizeof(int) * 5);
    }
    
    //写数据，两重循环
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            p[i][j] = i + j; // p[i][j]==  *(p+i)[j] ==  *(*(p+i)+j)
        }
    }
    //读数据
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t ", p[i][j]);
        }
        puts("");
    }
    
    //释放空间，先释放内层空间，再释放外层空间
    //先释放内层空间
    for (int j = 0; j < 10; j++) {
        free(*(p+j)); // p[i]==  *(p+i)
        *(p+j) = NULL;
    }
    //再释放外层空间
    free(p);
    p = NULL;
    

    
    return 0;
}
