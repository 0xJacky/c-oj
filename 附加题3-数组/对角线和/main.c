//
//  main.c
//  对角线和
//
//  Created by Jacky on 2020/3/16.
//  Copyright © 2020 Jacky. All rights reserved.
//
/*
 题目描述
 求一个3×3矩阵对角线元素之和。
 
 对角线是从左上角到右下角。
 
 输入
 输入一个3×3矩阵，矩阵元素均是整数
 
 输出
 输出矩阵对角线上的元素之和
 
 样例输入
 1 2 3
 4 5 6
 7 8 9
 样例输出
 15
 */

#define N 3
#include <stdio.h>

int main(int argc, const char* argv[]) {
    int input[N][N], ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &input[i][j]);
        }
        ans += input[i][i];
    }

    printf("%d\n", ans);
    return 0;
}