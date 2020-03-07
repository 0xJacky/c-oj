//
//  main.c
//  计算球体积(格式化输出)
//
//  Created by Jacky on 2020/3/6.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 根据输入的半径值，计算球的体积。
 
 输入
 输入一个实数，表示球的半径。
 
 输出
 输出对应的球的体积，计算结果保留三位小数。
 
 样例输入
 1
 样例输出
 4.189
 */
#define PI        3.14159265358979323846
#include <stdio.h>
#include <math.h>

int main() {
    double r;
    scanf("%lf", &r);
    // 学校编译器没有定义 M_PI
    printf("%.3lf\n", (4*PI*pow(r, 3))/3);
    return 0;
}
