//
//  main.c
//  20220225-8
//
//  Created by jujube on 2022/2/25.
//

#include <stdio.h>
#include <string.h>

int str_num(char *str, char *substr);

int main(int argc, const char * argv[]) {
    char *str = "hellol0lollo";
    char *substr = "llo";
    
    int ret = str_num(str, substr);
    
    printf("ret = %d \n", ret);
    
    return 0;
}

int str_num(char *str, char *substr) {
    int count = 0;
    
    char *p = strstr(str, substr);
    while (p) {
        count ++;
        p += strlen(substr);
        p = strstr(p, substr);
    }
    return count;
}
