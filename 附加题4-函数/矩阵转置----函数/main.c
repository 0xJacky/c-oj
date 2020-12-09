//
//  main.c
//  矩阵转置----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 写一个函数，使给定的一个二维数组（３×３）转置，即行列互换。
 输入
 一个3x3的矩阵
 输出
 转置后的矩阵
 样例输入
 1 2 3
 4 5 6
 7 8 9
 样例输出
 1 4 7
 2 5 8
 3 6 9
 */

#define N 3
#include <stdio.h>

int (*transform(int a[N][N]))[N] {
    static int b[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            b[j][i] = a[i][j];
        }
    }
    return b;
}

int main() {
    int input[N][N], (*p)[N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &input[i][j]);
        }
    }
    p = transform(input);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
    return 0;
}