//
//  main.c
//  鞍点定位
//
//  Created by Jacky on 2020/3/16.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 在一个二维矩阵中，如果某个位置的数值是该行最大值，同时也是该列最小值，我们则称该位置是矩阵的鞍点。
 鞍点在工业控制，建筑力学等方面有着广泛应用。鞍点可能有多个，也可能没有。
 请编写程序找出矩阵的鞍点。
 
 输入
 第一行输入T表示有T个测试实例
 第二行输入两个参数A和B，分别表示矩阵的行数和列数
 第三行输入二维矩阵的数据，假定数据都是正整数
 以此类推输入下个实例
 
 输出
 输出鞍点所在的行号和列号，行号和列号都是从0开始编号。
 本题目无需考虑存在多个鞍点的情况，假设如果有鞍点则只有唯一个
 如果鞍点不能存在则输出-1
 
 样例输入
 2
 3 3
 11 77 33
 44 66 55
 22 88 99
 4 2
 22 11
 33 44
 55 66
 11 88
 样例输出
 1 1
 -1
 */

#include <stdio.h>
#include <limits.h>

int main() {
    int t, row, col, input[100][100], flag = 1;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &row, &col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                scanf("%d", &input[i][j]);
            }
        }
        // 行最大值 列最小值
        int max, min, max_i = 0, max_j = 0;
        for (int i = 0; i < row; i++) {
            max = INT_MIN;
            min = INT_MAX;
            for (int j = 0; j < col; j++) {
                if (input[i][j] > max) {
                    max = input[i][j];
                    max_i = i;
                    max_j = j;
                }
            }
            flag = 1;
            min = max;
            for (int k = 0; k < row; k++) {
                if (input[k][max_j] < min) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
        
        if (flag) {
            printf("%d %d\n", max_i, max_j);
        } else {
            printf("-1\n");
        }
        
    }
    return 0;
}
