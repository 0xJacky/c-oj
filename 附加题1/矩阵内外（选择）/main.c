//
//  main.c
//  矩阵内外（选择）
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 二维平面点用（x,y）
 坐标表示。输入矩形的左上角和右下角坐标，输入一个点，判定该点是否在给定的矩形内。
 （假设该矩形的边分别平行于X轴、Y轴）。
 
 输入
 第一行：矩形的左上角坐标
 
 第二行：矩形的右下角坐标
 
 任一点坐标
 
 输出
 若该点落在矩形内，输出IN，否则，输出OUT
 
 样例输入
 10  20
 30  0
 40  -10
 样例输出
 OUT
 */

#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    scanf("%d %d", &e, &f);

    if (e > a && e < c && f > d && f < b) {
        printf("IN\n");
    } else {
        printf("OUT\n");
    }

    return 0;
}