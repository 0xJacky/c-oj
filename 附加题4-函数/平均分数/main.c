//
//  main.c
//  平均分数
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 要求输入指定数量的学生成绩，求出其平均分数并输出。
 
 求平均分的部分用函数实现（形参应该用数组名或指针变量）。
 
 输入
 学生数量
 
 每个学生的分数
 
 输出
 平均分数
 
 样例输入
 5
 22 55 77 90 80
 样例输出
 64.80
 */

#include <stdio.h>

float avg(int n, float total) {
    return total / n;
}

int main() {
    int n;
    float total = 0, t, ans;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &t);
        total += t;
    }
    ans = avg(n, total);
    printf("%.2f\n", ans);
    return 0;
}
