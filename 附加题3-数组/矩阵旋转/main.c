//
//  main.c
//  矩阵旋转
//
//  Created by Jacky on 2020/3/16.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入一个N*M的矩阵，要求将这个矩阵右转90度后输出。
 
 例如矩阵：
         A B C
         D E F
 
 右转90度后变成：
         D   A
         E   B
         F   C
 输入
 第一行包含两个参数n和m，表示矩阵有n行m列，1<=n,m<=10
 接下来输入n行数据，每行包含m个元素，每个元素用字母表示
 输出
 输出右转90度后的矩阵
 
 样例输入
 2 3
 A B C
 D E F
 样例输出
 D A
 E B
 F C
 */

#include <stdio.h>

int main() {
    int n, m;
    char input[10][10];
    scanf("%d %d", &n, &m);
    getchar();

    for (int a = 0; a < n; a++) {
        for (int b = 0; b < m; b++) {
            scanf("%c", &input[a][b]);
            getchar();
        }
    }

    for (int b = 0; b < m; b++) {
        for (int a = n - 1; a >= 0; a--) {
            printf("%c ", input[a][b]);
        }
        printf("\n");
    }
    return 0;
}