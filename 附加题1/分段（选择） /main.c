//
//  main.c
//  分段（选择） 分段（选择）
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//
/*
 题目描述
 有一个函数
 y={ x      x<1
 | 2x-1   1<=x<10
 \ 3x-11  x>=10
 
 写一段程序，输入x，输出y
 
 输入
 一个数x
 
 输出
 一个数y
 
 样例输入
 14
 样例输出
 31
 */

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d", &x);
    if (x < 1) {
        y = x;
    } else if (x >= 1 && x < 10) {
        y = 2 * x - 1;
    } else {
        y = 3 * x - 11;
    }

    printf("%d\n", y);

    return 0;
}