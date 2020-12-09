//
//  main.c
//  阵列最小元素
//
//  Created by Jacky on 2020/3/16.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 输入
 测试次数t
 每组测试数据为：
 n、m
 n行m列个数据
 输出
 对每组测试数据输出最小元素及其行、列位置。
 样例输入
 2
 3 4
 1 2 3 10
 4 5 6 11
 7 8 9 12
 5 4
 11.4 12.8 -10.5 9.87
 323 12 34 54
 3112 3 42 -123
 31.43 653.23 12 43.43
 13.4 345 432 132
 样例输出
 1 1 1
 -123 3 4
 */

#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int main() {
    int t, n, m, min_i, min_j, min;
    double tmp;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &m);
        min_i = 0;
        min_j = 0;
        min = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%lf", &tmp);
                if (tmp < min) {
                    min = (int)tmp;
                    min_i = i;
                    min_j = j;
                }
            }
        }
        min_i++;
        min_j++;
        printf("%d %d %d\n", min, min_i, min_j);
    }

    return 0;
}