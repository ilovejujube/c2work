//
//  main.c
//  20220224-6
//
//  Created by jujube on 2022/2/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //冒泡排序，大数在后
    int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    int i, j, temp;
    int num = sizeof(arr) / sizeof(arr[0]); //数组元素数量
    
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    for (i = 0; i < num; i++) {
        for (j = i + 1; j < num; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
