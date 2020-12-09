//
//  main.c
//  计算圆内接正n边形面积
//
//  Created by Jacky on 2020/3/6.
//  Copyright © 2020 Jacky. All rights reserved.
//
/*
 题目描述
 输入圆半径R、正整数n，计算并输出圆内接正n边形的面积。
 
 面积公式：nR*Rsin(2π/n)/2。
 
 C语言中已定义正弦函数sin(x)，其中x是弧度。使用sin(x)需包含头文件math.h。
 
 π的取值为3.1415926。
 
 输入
 浮点数圆半径r,正整数n
 
 输出
 圆内接正n边形面积
 
 样例输入
 10,4
 样例输出
 Area=200.00
 */

#define PI 3.1415926
#include <math.h>
#include <stdio.h>

int main() {
    double r, s;
    int n;

    scanf("%lf,%d", &r, &n);

    s = n * pow(r, 2) * sin(2.0 * PI / n) / 2.0;

    printf("Area=%.2lf\n", s);

    return 0;
}