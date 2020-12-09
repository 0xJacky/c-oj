//
//  main.c
//  求三个数中的最大值（选择）
//
//  Created by Jacky on 2020/3/6.
//  Copyright © 2020 Jacky. All rights reserved.
//
/*
 题目描述
 编写一个程序，输入a、b、c三个值，输出其中最大值。
 
 输入
 一行数组，分别为a b c
 
 输出
 a b c其中最大的数
 
 样例输入
 10 20 30
 样例输出
 30
 */

#define max(a, b) a > b ? a : b
#include <limits.h>
#include <stdio.h>

int main(int argc, const char* argv[]) {
    int a, b, c, m = INT_MIN;
    scanf("%d %d %d", &a, &b, &c);

    m = max(m, a);
    m = max(m, b);
    m = max(m, c);

    printf("%d\n", m);

    return 0;
}