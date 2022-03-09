//
//  main.cpp
//  20220308-2
//
//  Created by jujube on 2022/3/8.
//

#include <iostream>

void write_file()
{
    FILE *fp = fopen("05test.txt", "w");
    if (fp == NULL)
    {
        perror("fopen error");
        return ;
    }

    fputc('a', fp);
    fputc('b', fp);
    fputc('c', fp);
    fputc('d', fp);

    fclose(fp);
}

void read_file()
{
    char ch = 0;

    FILE *fp = fopen("05test.txt", "r");
    if (fp == NULL)
    {
        perror("fopen error");
        return;
    }

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF) // 文本文件的结束标记： EOF ---》 -1 
        {
            break;
        }
        
        printf("%c\n", ch);
    }

    fclose(fp);
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    write_file();
    read_file();
    
    return 0;
}
