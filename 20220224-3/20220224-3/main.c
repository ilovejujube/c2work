//
//  main.c
//  20220224-3
//
//  Created by jujube on 2022/2/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //猜随机数
    srand(time(NULL));  //种随机数种子
    
    int num = rand() % 100;
    printf("input a num:");
    int a;
    for(;;){
        scanf("%d", &a);
        if (a == num){
            printf("great!\n");
            break;
        } else if (a > num){
            printf("big!\n");
        } else {
            printf("small!\n");
        }
    }
    
    return 0;
}
