//
//  main.c
//  六、矩阵操作
//
//  Created by Jacky on 2020/7/8.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 问题 F: 六、矩阵操作（10分）
 时间限制: 1 Sec  内存限制: 128 MB
 提交: 58  解决: 13
 [提交][状态][讨论版]
 题目描述
 输入一个3行3列的整数矩阵，找出矩阵中第二小的数（假设一定存在第二小的数），如果存在多个第二小的数，找出排在矩阵最前面的一个，也就是下标最小的那个，具体输出格式看样例。
 
 输入
 测试数据的组数t
 
 第一个矩阵
 
 第二个矩阵
 
 …..
 
 输出
 每个矩阵第二小的数的位置及其值
 
 样例输入
2
1 2 3
0 4 5
0 0 6
1 0 9
-8 2 10
7 6 100
 样例输出
 a[0][0]=1
 a[0][1]=0
 提示
 */

#define N 3
#include <limits.h>
#include <stdio.h>

int main() {
    int t, a[N][N], min = INT_MAX, x_i = 0, x_j = 0, x = INT_MAX;
    scanf("%d", &t);
    while (t--) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &a[i][j]);
                if (a[i][j] < min) {
                    min = a[i][j];
                }
            }
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (a[i][j] > min && a[i][j] < x) {
                    x = a[i][j];
                    x_i = i;
                    x_j = j;
                }
            }
        }
        printf("a[%d][%d]=%d\n", x_i, x_j, x);
    }

    return 0;
}