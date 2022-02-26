//
//  main.c
//  20220225
//
//  Created by jujube on 2022/2/25.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
//    char str[100];
       
//    printf("input string1 : \n");
//    scanf("%s", str);//scanf(“%s”,str)默认以空格分隔
//    printf("output:%s\n", str);
    
//    printf("请输入str: ");
//    gets(str); // 不安全，容易导致字符数组越界(缓冲区溢出)，不读空格，回车
//    printf("str = %s\n", str);
    
//    printf("请输入str: "); //会读取回车，空格
//    fgets(str, sizeof(str), stdin);
//    printf("str = \"%s\"\n", str);
    
//    puts("hello world"); //在输出完成后自动输出一个'\n'
//    printf("hello world");
//    fputs("hello world", stdout); //fputs()是puts()的文件操作版本，但fputs()不会自动输出一个'\n'。
    
    char str[] = "abc\0defg";
    printf("strlen(str) = %lu\n", strlen(str));  //返回：有效的字符个数，结束符\0不算在内。碰到 \0 结束。
    
    
    return 0;
}
