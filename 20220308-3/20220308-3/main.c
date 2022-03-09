//
//  main.c
//  20220308-3
//
//  Created by jujube on 2022/3/8.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    FILE *fp = fopen("test07.txt", "w");
    if (fp == NULL)
    {
        perror("fopen error");
        return -1;
    }
    char buf[4096] = {0}; //4kb

    while (1)
    {
        fgets(buf, 4096, stdin); // 会把换行符读进来
        if (strcmp(buf, ":wq\n") == 0)
        {
            break;
        }
        fputs(buf, fp);
    }

    fclose(fp);
    
    return 0;
}
