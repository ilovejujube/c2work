//
//  main.c
//  20220225-7
//
//  Created by jujube on 2022/2/25.
//

#include <stdio.h>

void str_no_space(char *str1, char *str2);

int main(int argc, const char * argv[]) {
    // insert code here...
    char dst[100] = {0};
    char *str2 = "he  l l o wo rl d";
    
    str_no_space(dst, str2);
    
    printf("dst = %s\n", dst);
    
    return 0;
}

void str_no_space(char *str1, char *str2) {
    
    while (*str2) {
        if (*str2 != ' ') {
            *(str1++) = *(str2++);
        } else {
            str2++;
        }
    }
    *str1 = '\0';
}
