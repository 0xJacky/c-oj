//
//  main.c
//  输入输出学生数据----函数
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 现有有N个学生的数据记录，每个记录包括学号、姓名、三科成绩。
 编写一个函数input,用来输入一个学生的数据记录。
 编写一个函数print,打印一个学生的数据记录。
 在主函数调用这两个函数，读取N条记录输入，再按要求输出。
 N<100
 输入
 学生数量N占一行 每个学生的学号、姓名、三科成绩占一行，空格分开。
 输出
 每个学生的学号、姓名、三科成绩占一行，逗号分开。
 样例输入
 2
 a100 zhblue 70 80 90
 b200 newsclan 90 85 75
 样例输出
 a100,zhblue,70,80,90
 b200,newsclan,90,85,75
 */

#define N 130
#define M 50
#include <stdio.h>

struct Student {
    char id[M];
    char name[M];
    int s1;
    int s2;
    int s3;
} input[N];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d %d", input[i].id, input[i].name, &input[i].s1,
              &input[i].s2, &input[i].s3);
    }

    for (int i = 0; i < n; i++) {
        printf("%s,%s,%d,%d,%d\n", input[i].id, input[i].name, input[i].s1,
               input[i].s2, input[i].s3);
    }

    return 0;
}