//
//  main.c
//  20220224-8
//
//  Created by jujube on 2022/2/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char str[100] = {0};
    
    int i;
    
    //scanf("%s", str);
    for ( i = 0; i < 10; i++)
    {
        scanf("%c", &str[i]);
    }

    int count[26] = {0};  // 代表26个英文字母出现的次数。

    for ( i = 0; i < 11; i++)
    {
        int index = str[i] - 'a';    // 用户输入的字符在 count数组中的下标值。
        count[index]++;
    }

    for ( i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c字符在字符串中出现 %d 次\n", i+'a', count[i]);
        }
    }
    scanf("%s", str);
    
    
    return 0;
}
