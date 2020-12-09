//
//  main.c
//  动态矩阵（指针与堆内存分配）
//
//  Created by Jacky on 2020/3/20.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 未知一个整数矩阵的大小，在程序运行时才会输入矩阵的行数m和列数n
 要求使用指针，结合new方法，动态创建一个二维数组，并求出该矩阵的最小值和最大值，可以使用数组下标法。
 不能先创建一个超大矩阵，然后只使用矩阵的一部分空间来进行数据访问、
 创建的矩阵大小必须和输入的行数m和列数n一样
 
 输入
 第一行输入t表示t个测试实例
 第二行输入两个数字m和n，表示第一个矩阵的行数和列数
 第三行起，连续输入m行，每行n个数字，表示输入第一个矩阵的数值
 依次输入t个实例
 
 输出
 每行输出一个实例的最小值和最大值
 
 样例输入
 2
 2 3
 33 22 11
 66 88 55
 3 4
 19 38 45 14
 22 65 87 31
 91 35 52 74
 样例输出
 11 88
 14 91
 */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, m, n, **p, min, max;
    scanf("%d", &t);
    while (t--) {
        min = INT_MAX;
        max = INT_MIN;
        scanf("%d %d", &m, &n);
        p = (int **)malloc(m * sizeof(int));
        for (int i = 0; i < m; i++) {
            p[i] = (int *)malloc(n * sizeof(int));
            for (int j = 0; j < n; j++) {
                scanf("%d", &p[i][j]);
                if (p[i][j] > max) {
                    max = p[i][j];
                }
                if (p[i][j] < min) {
                    min = p[i][j];
                }
            }
        }

        printf("%d %d\n", min, max);

        for (int i = 0; i < m; i++) {
            free(*(p + i));
        }
    }
    return 0;
}