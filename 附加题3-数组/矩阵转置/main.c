//
//  main.c
//  矩阵转置
//
//  Created by Jacky on 2020/3/15.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 在数学上，矩阵是指纵横排列的二维数据表格。
 设A为m×n阶j矩阵(即m行n列)，第i 行j 列的元素是a[i][j]。定义A的转置为一个n×m阶矩阵B，其中b[i][j] = a[j][i] ,即B的第i行第j列元素是A的第j行第i列元素，记A'=B.
 输入
 输入测试次数
 每组测试数据格式如下：
 输入n,m表示矩阵A有n行，m列
 接下来输入n行，每行m个数（n<10,m<10）
 输出
 对每组测试数据，输出转置后的m行n列数据。具体格式见样例。
 样例输入
 3
 2 2
 1 3
 2 1
 3 2
 10 20
 3 4
 40 6
 4 4
 1 2 3 4
 5 6 7 8
 9 10 11 12
 13 14 15 16
 样例输出
 1 2
 3 1
 10 3 40
 20 4 6
 1 5 9 13
 2 6 10 14
 3 7 11 15
 4 8 12 16
 */

#include <stdio.h>

int main() {
    int t, m, n, input[100][100];
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &m, &n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &input[i][j]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("%d ", input[j][i]);
            }
            printf("\n");
        }
    }

    return 0;
}