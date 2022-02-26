//
//  main.c
//  20220225-3
//
//  Created by jujube on 2022/2/25.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arrlen = sizeof(arr) / sizeof(arr[0]);
    
    int i;
    for (i = 0; i < arrlen; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (i = 0; i < arrlen; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    
    int *p = arr;
    for (i = 0; i < arrlen; i++) {
        printf("%d ", *(p+i));
    }
    printf("\n");
    
    int *p1 = arr;
    for (i = 0; i < arrlen; i++) {
        printf("%d ", *(p1++)); // 最后p变成野指针
    }
    printf("\n");
    return 0;
}
