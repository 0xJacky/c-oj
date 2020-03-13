//
//  main.c
//  一元二次方程的两个实根求解
//
//  Created by Jacky on 2020/3/6.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入一元二次方程ax^2+bx+c=0的系数a、b、c。
 
 假设输入始终满足b^2-4ac>0且a不等于0,计算并输出该方程的两个实根。
 
 C语言中计算非负实数的平方根函数： double sqrt(double);
 
 头文件：math.h。
 
 输入
 一元二次方程的系数a、b、c
 
 输出
 ax^2+bx+c=0的两个实根
 
 样例输入
 1 0 -1
 样例输出
 x1=1.00 x2=-1.00
 */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, vdelta, x1, x2;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    vdelta = sqrt(pow(b, 2) - 4 * a * c);
    
    x1 = (-b + vdelta) / (2.0 * a);
    x2 = (-b - vdelta) / (2.0 * a);
    
    printf("x1=%.2lf x2=%.2lf\n", x1, x2);
    
    return 0;
}
