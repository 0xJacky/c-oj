//
//  main.c
//  一、计算操场的面积
//
//  Created by Jacky on 2020/7/8.
//  Copyright © 2020 Jacky. All rights reserved.
//
/*
 问题 A: 一、计算操场的面积（20分）
 时间限制: 1 Sec  内存限制: 128 MB
 提交: 97  解决: 77
 [提交][状态][讨论版]
 题目描述
 学校的操场是由一个长方形与两个半圆组成的，如下图所示，长方形的长为l米，宽为半圆半径r米的两倍，输入长方形的长度以及圆的半径，计算并输出操场的面积，结果保留两位小数。（PI= 3.1416）
 
 
 
 输入
 长方形的长度l和圆半径r
 
 输出
 操场的面积（保留两位小数）
 
 样例输入
 25.1 15
 样例输出
 1459.86
 提示
 */

#define PI 3.1416
#include <stdio.h>

int main() {
    float l, r;
    scanf("%f %f", &l, &r);
    printf("%.2f\n", PI * r * r + l * r * 2);
    return 0;
}