//
//  main.c
//  求矩阵每列的最大值与和
//
//  Created by Jacky on 2020/3/16.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 定义一个二维数组（不超过10*10），输入方阵的大小n，然后输入数组的数据，求该矩阵每列的最大值与和
 
 输入
 测试数据的组数t
 
 第一个矩阵的大小n
 
 第一个矩阵的元素
 
 第二个矩阵的大小n
 
 第二个矩阵的元素
 
 ......
 
 输出
 第一个矩阵的每一列最大值、和
 
 第二个矩阵的每一列最大值、和
 
 样例输入
 2
 3
 12 25 3 41 5 66 7 82 91
 4
 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
 样例输出
 41 60
 82 112
 91 160
 13 28
 14 32
 15 36
 16 40
 */

#include <stdio.h>
#include <limits.h>

int main() {
    int t, n, input[100][100], max, sum;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &input[i][j]);
            }
        }
        for (int i = 0; i < n; i++) {
            max = INT_MIN;
            sum = 0;
            for (int j = 0; j < n; j++) {
                if (input[j][i] > max) {
                    max = input[j][i];
                }
                sum += input[j][i];
            }
            printf("%d %d\n", max, sum);
        }
    }
    return 0;
}
