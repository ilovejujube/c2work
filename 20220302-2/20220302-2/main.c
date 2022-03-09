//
//  main.c
//  20220302-2
//
//  Created by jujube on 2022/3/2.
//

#include <stdio.h>

enum  color { red, green = -5, blue, black, pink = 18, yellow };

int main(int argc, const char * argv[]) {
    // insert code here...
    int flg = 2;

    // ......

    if (flg == blue)
    {
        printf("blue is 2\n");
    }
    else
    {
        printf("blue is not 2, blue = %d\n", blue);
    }
    printf("yellow = %d\n", yellow);

    
    return 0;
}
