//
//  main.c
//  20220301
//
//  Created by jujube on 2022/3/1.
//

#include <stdio.h>
#include <string.h>

typedef struct student ss; //给struct student取别名 ss
struct student {
    //结构体偏移对齐
    char name[21];
    int age;
    int score;
    char addr[51];
}stu1, stu2, stu3;

int main(int argc, const char * argv[]) {
    // insert code here...
    struct student stu; // struct student stu = {"jujube", 18,100,"zhejiangquzhou"};
    // stu.name = "jujube"; //报错：Array type 'char [21]' is not assignable
    ss stu4 = {"alice", 18,100,"zhejiangquzhou"};
    strcpy(stu.name, "jujube");
    stu.age = 18;
    stu.score = 100;
    strcpy(stu.addr, "zhejiangquzhou");
    
    printf("name: %s\n", stu4.name);
    printf("age: %d\n", stu4.age);
    return 0;
}
