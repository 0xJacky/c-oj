//
//  main.c
//  求若干个学生的总成绩----结构体
//
//  Created by Jacky on 2020/3/21.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 有N个学生，每个学生的数据包括学号、姓名、3门课的成绩，从键盘输入N个学生的数据，要求打印出3门课的总平均成绩，以及最高分的学生的数据（包括学号、姓名、3门课成绩）
 输入
 学生数量N占一行每个学生的学号、姓名、三科成绩占一行，空格分开。
 输出
 各门课的平均成绩 最高分的学生的数据（包括学号、姓名、3门课成绩）
 样例输入
 2
 1 blue 90 80 70
 b clan 80 70 60
 样例输出
 85 75 65
 1 blue 90 80 70
 */

#define N 100
#include <stdio.h>

struct Student {
    char id[10];
    char name[20];
    int s1;
    int s2;
    int s3;
} student[N], max;

int sum(struct Student s) {
    return s.s1 + s.s2 + s.s3;
}

int main() {
    int n, s1 = 0, s2 = 0, s3 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d %d", student[i].id, student[i].name, &student[i].s1,
              &student[i].s2, &student[i].s3);
        s1 += student[i].s1;
        s2 += student[i].s2;
        s3 += student[i].s3;
    }
    s1 /= n;
    s2 /= n;
    s3 /= n;
    max = student[0];
    for (int i = 1; i < n; i++) {
        if (sum(student[i]) > sum(max)) {
            max = student[i];
        }
    }
    printf("%d %d %d\n", s1, s2, s3);
    printf("%s %s %d %d %d\n", max.id, max.name, max.s1, max.s2, max.s3);
    return 0;
}