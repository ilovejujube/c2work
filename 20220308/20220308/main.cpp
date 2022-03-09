//
//  main.cpp
//  20220308
//
//  Created by jujube on 2022/3/8.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp = NULL;
//    fp = fopen("/Users/jujube/Downloads/ambisonics.pdf", "r");
    fp = fopen("a2.txt", "w");
    //检查返回值，重要，一定要写
    if (fp == NULL) {
        perror("fopen error"); // perror -- 屏幕 -- 标准错误
//        getchar(); //不加的话就一闪而过
        return -1;
    }
    char ch = 'a';
    int ret = 0;
    while (ch <= 'z') {
        ret = fputc(ch, fp);
        if (ret == -1) {
            perror("fopen error"); // perror -- 屏幕 -- 标准错误
            return -1;
        }
        ch ++;
    }
    
    fclose(fp);
    
    std::cout << "finished\n";
    
    return 0;
}
