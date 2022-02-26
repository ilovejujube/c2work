//
//  main.c
//  20220226
//
//  Created by jujube on 2022/2/26.
//

#include <stdio.h>
#include <string.h>

void str_reverse(char *str);
int str_abcba(char *str);

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[] = "hellowlleh";

    
//    str_reverse(str);
//    printf("%s\n", str);
    
    int ret = str_abcba(str);
    if(ret) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    
    return 0;
}
//判断回文字符串
int str_abcba(char *str) {
    
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end) {
        if (*(start++)!= *(end--)) {
            return 0;  //表示非回文
        }
    }
    return 1; //表示回文
}

//字符串逆序
void str_reverse(char *str) {
    
    char *start = str;
    char *end = str + strlen(str) - 1;
    while (start < end) {
        char temp = *start;
        *start= *end;
        *end = temp;
        start ++;
        end --;
    }
}
