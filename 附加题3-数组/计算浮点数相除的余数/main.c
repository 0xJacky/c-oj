//
//  main.c
//  计算浮点数相除的余数
//
//  Created by Jacky on 2020/3/15.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 计算两个双精度浮点数a和b的相除的余数，a和b都是正数的。 这里余数（r）的定义是：a=k*b+r，其中k是整数， 0<=r
 输入
 输入仅一行，包括两个双精度浮点数a和b。
 输出
 输出也仅一行，a÷b的余数
 样例输入
 73.263 0.9973
 样例输出
 0.4601
 */

#include <stdio.h>

int main() {
    
    double a, b, r;
    int k;
    
    scanf("%lf %lf", &a, &b);
    
    k = (int) (a / b);
    r = a - k * b;
    
    printf("%.4lf\n", r);
    
    return 0;
}
