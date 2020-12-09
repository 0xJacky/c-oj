//
//  main.c
//  判断某天是年份中第几天----结构体
//
//  Created by Jacky on 2020/3/21.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年问题。
 输入
 年月日
 输出
 当年第几天
 样例输入
 2000 12 31
 样例输出
 366
 */

#include <stdio.h>

struct Date {
    int y;
    int m;
    int d;
} date;

int isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

int main() {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, ans = 0;

    scanf("%d %d %d", &date.y, &date.m, &date.d);

    if (isLeapYear(date.y)) {
        days[1] = 29;
    }

    for (int i = 0; i < date.m - 1; i++) {
        ans += days[i];
    }

    ans += date.d;

    printf("%d\n", ans);

    return 0;
}