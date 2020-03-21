//
//  main.c
//  谁是老二（结构体）
//
//  Created by Jacky on 2020/3/20.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 定义一个结构体，包含年月日，表示一个学生的出生日期。然后在一群学生的出生日期中找出谁的出生日期排行第二
 
 要求：出生日期的存储必须使用结构体，不能使用其他类型的数据结构。
 
 要求程序全过程对出生日期的输入、访问、输出都必须使用结构。
 
 输入
 第一行输入t表示有t个出生日期
 
 每行输入三个整数，分别表示年、月、日
 
 依次输入t个实例
 
 输出
 输出排行第二老的出生日期，按照年-月-日的格式输出
 
 样例输入
 6
 1980 5 6
 1981 8 3
 1980 3 19
 1980 5 3
 1983 9 12
 1981 11 23
 样例输出
 1980-5-3
 */

#define N 1000
#include <stdio.h>

struct Birdthday {
    int y;
    int m;
    int d;
} b[N], tmp;

int dateToInt(struct Birdthday m) {
    int n = 0;
    n += m.y * 1000;
    n += m.m * 100;
    n += m.d;
    return n;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &b[i].y, &b[i].m, &b[i].d);
    }
    
    for (int i = 0; i < t - 1; i++) {
        for (int j = 0; j < t - i - 1; j++) {
            if (dateToInt(b[j]) > dateToInt(b[j+1])) {
                tmp = b[j];
                b[j] = b[j+1];
                b[j+1] = tmp;
            }
        }
    }
    
    printf("%d-%d-%d\n", b[1].y, b[1].m, b[1].d);

    return 0;
}
