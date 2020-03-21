//
//  main.c
//  矩阵运算
//
//  Created by Jacky on 2020/3/21.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 两个m×n矩阵A和B的加，标记为A+B，一样是个m×n矩阵，其内的各元素为A、B相对应元素相加后的值。例如：
 设A为  的矩阵，B为  的矩阵，那么称  的矩阵C为矩阵A与B的乘积，记作AxB，
 其中矩阵C中的第i行第j列元素可以表示为A的第i行与B的第j列对应元素乘积和
 输入
 测试次数t
 每组测试数据格式如下：
 矩阵阶数n（0<n<10)
 n*n矩阵A
 n*n矩阵B
 
 输出
 对每组测试数据，输出A+B、AB
 
 样例输入
1
2
1 2
3 4
1 2
3 4
 样例输出
 2 4
 6 8
 7 10
 15 22
 */

#define N 50
#include <stdio.h>

int main() {
    int t, n, a[N][N], b[N][N], c[N][N], d[N][N] = {0};
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &b[i][j]);
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", c[i][j]);
                for (int k = 0; k < n; k++) {
                    d[i][j] += a[i][k] * b[k][j];
                }
            }
            printf("\n");
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", d[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
