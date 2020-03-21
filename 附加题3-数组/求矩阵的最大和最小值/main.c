//
//  main.c
//  求矩阵的最大和最小值
//
//  Created by Jacky on 2020/3/15.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 定义一个函数用一级指针接收一个任意行任意列的矩阵并返回该矩阵元素的最大和最小值.
 输入
 矩阵的行数 矩阵的列数
 矩阵各元素的值
 输出
 最大值
 最小值
 样例输入
 3 3
 1 2 3
 4 5 6
 7 8 9
 样例输出
 9
 1
 */

#include <stdio.h>
#include <limits.h>

int main() {
    int p, row, col, min = INT_MAX, max = INT_MIN;
    scanf("%d %d", &row, &col);
    
    for (int i = 0; i < row * col; i++) {
        scanf("%d", &p);
        if (p < min) {
            min = p;
        }
        if (p > max) {
            max = p;
        }
    }
    
    printf("%d\n%d\n", max, min);
    
    return 0;
}
