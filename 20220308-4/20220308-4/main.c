//
//  main.c
//  20220308-4
//
//  Created by jujube on 2022/3/8.
//

#include <stdio.h>
#include <string.h>

void write_file()
{
    FILE *fp = fopen("05test.txt", "w");
    if (fp == NULL)
    {
        perror("fopen error");
        return ;
    }

    fputs("10/2=\n", fp);
    fputs("10*3=\n", fp);
    fputs("4-2=\n", fp);
    fputs("10+2=\n", fp);

    fclose(fp);
}

int calc(char ch, int a, int b)
{
    switch (ch)
    {
    case '/':
        return a / b;
        
    case '+':
        return a + b;
        
    case '-':
        return a - b;
        
    case '*':
        return a *b;
    default:
        break;
    }
    return -1;
}
void read_file(void)
{
    char buf[4096] = {0};
    char result[4096] = {0};

    char sum_res[4096] = {0};

    int a, b;
    char ch;

    FILE *fp = fopen("test08.txt", "r");
    if (fp == NULL)
    {
        perror("fopen error");
        return;
    }

    while (1)
    {
        fgets(buf, 4096, fp);  //buf = "10/2=\n\0";
        if (feof(fp))
        {
            break;
        }
        sscanf(buf, "%d%c%d=\n", &a, &ch, &b);    // a£∫10£¨ ch£∫'/' b: 2

        sprintf(result, "%d%c%d=%d\n", a, ch, b, calc(ch, a, b));  // 10 / 2 = 5;

        strcat(sum_res, result);
    }
    fclose(fp);  // Ω´ ÷ª”–±Ì¥Ô Ω√ª”–Ω·π˚µƒŒƒº˛πÿ±’°£

    fp = fopen("test08.txt", "w");    // «Âø’ ÷ª”–±Ì¥Ô Ω√ª”–Ω·π˚µƒŒƒº˛
    if (fp == NULL)
    {
        perror("fopen error");
        return;
    }
    fputs(sum_res, fp);    // Ω´ º»”–±Ì¥Ô Ω”÷”–Ω·π˚µƒ◊÷∑˚¥Æ–¥µΩŒƒº˛÷–°£

    fclose(fp);
}


int main(int argc, const char * argv[]) {
    write_file();
    write_file();
    getchar();
    read_file();

    
    
    
    return 0;
}
