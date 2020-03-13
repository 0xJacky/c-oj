//
//  main.c
//  求解ax2+bx+c=0（选择）
//
//  Created by Jacky on 2020/3/11.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 一元二次方程ax^2+bx+c=0，从键盘输入a、b、c的值后，计算并输出两个根的值，结果保留三位小数。（考虑delt>0、delt=0、delt<0三种情况）
 
 输入
 a b c
 
 输出
 x1=? x2=?
 
 样例输入
 4 1 1
 样例输出
 x1=-0.125+0.484i x2=-0.125-0.484i
 */

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, x1, x2, delta, vdelta;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = pow(b, 2) - 4.0 * a * c;
    
    if (delta >= 0) {
        vdelta = sqrt(delta);
        x1 =  (- b + vdelta) / (2.0 * a);
        x2 =  (- b - vdelta) / (2.0 * a);
        printf("x1=%.3lf x2=%.3lf\n", x1, x2);
    } else {
        x1 = - b / (2.0 * a);
        vdelta = sqrt(-delta) / (2.0 * a);
        printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi\n", x1, vdelta, x1, vdelta);
    }
    
    return 0;
}
