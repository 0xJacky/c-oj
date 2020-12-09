//
//  main.c
//  矩形内外（函数调用）
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 对于一个已知的矩形，判断输入的点是否包含在该矩形内。
 
 点的坐标（x,y）用结构体来描述。矩形可以用对角线上的两个点来定义（左下角点和右上角点）。
 
 已知矩形的左下角点为（1,1），右上角点为（5,5）。
 
 要求编写一个函数判断点是否在矩形内，如果在内则返回1，否则返回-1
 
 主函数调用该判断函数，如果返回1则输出in，返回-1则输出out
 
 输入
 输入点的个数和每个点的坐标
 
 输出
 在矩形内部还是外部
 
 样例输入
 3
 1 1
 5 5
 5 10
 样例输出
 in
 in
 out
 提示
 如果点在矩阵内，则点坐标不大于矩阵的坐标范围
 */

#include <stdio.h>

int inMatrix(int x, int y) {
    return x >= 1 && x <= 5 && y >= 1 && y <= 5;
}

int main() {
    int n, x, y;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &x, &y);
        if (inMatrix(x, y)) {
            printf("in\n");
        } else {
            printf("out\n");
        }
    }
    return 0;
}