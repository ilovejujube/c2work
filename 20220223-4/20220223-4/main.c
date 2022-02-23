//
//  main.c
//  20220223-4
//
//  Created by jujube on 2022/2/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //数据溢出
    //人为规定：00000000 --》 0
    //        10000000 --》 -128
  
    char ch = 127 + 1;
    
    printf("ch = %d\n", ch);
    
    return 0;
}
