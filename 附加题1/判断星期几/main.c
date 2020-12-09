//
//  main.c
//  判断星期几
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 给定y年1月1日是星期几，输入y年m月d日，计算并输出y年m月d日是星期几？
 
 提示和要求：计算出从1月1日到m月d日的天数，利用得到的天数判定星期几。要求用switch输出星期几。
 
 输入
 测试次数t
 
 每组测试数据格式如下：
 
 y/1/1 星期几(0-6，星期天到星期六）
 
 y/m/d
 
 （不用考虑输入非法）
 
 输出
 对每组测试数据，输出y/m/d是星期几，具体格式见样例。
 
 样例输入
 3
 2017/1/1 0
 2017/10/17
 2000/1/1 6
 2000/10/1
 2012/1/1 0
 2012/12/31
 样例输出
 2017/10/17是星期二
 2000/10/01是星期日
 2012/12/31是星期一
 */

#include <stdio.h>

int isLeapYear(int y);

int main() {
    int t, y, m, d, x;

    // 定义每个月的天数
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int left = 0;

        scanf("%d/1/1 %d", &y, &x);
        scanf("%d/%d/%d", &y, &m, &d);

        if (isLeapYear(y)) {
            days[1] = 29;
        }

        for (int i = 0; i < m - 1; i++) {
            left += days[i];
        }

        left += d;

        printf("%d/%02d/%02d", y, m, d);
        switch ((x + (left - 1) % 7) % 7) {
            case 0:
                printf("是星期日");
                break;

            case 1:
                printf("是星期一");
                break;

            case 2:
                printf("是星期二");
                break;

            case 3:
                printf("是星期三");
                break;

            case 4:
                printf("是星期四");
                break;

            case 5:
                printf("是星期五");
                break;

            case 6:
                printf("是星期六");
                break;
        }
        printf("\n");
    }

    return 0;
}

int isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}