//
//  main.c
//  20220223-5
//
//  Created by jujube on 2022/2/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char ch1;
    ch1 = getchar();
    putchar(ch1);
    putchar('\n');
    
    char ch = 'a';
    
    printf("ch = %c\n", ch);
    
//    char str[] = "hello world!";
    char str[] = {'a', '\0'}; //这样的写法必须加上‘\0’,否则会一直打印直到在内存中碰到‘\0'才结束
    
    printf("str = %s\n", str);
    
    putchar(97);
    putchar('\n');
    putchar('a');
    putchar('\n');
    
    
    
    return 0;
}
