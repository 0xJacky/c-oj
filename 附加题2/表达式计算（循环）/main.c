//
//  main.c
//  表达式计算（循环）
//
//  Created by Jacky on 2020/3/12.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 设有函数y = f(x)定义如下。输入x的值，计算y值并输出(保留2位小数）。
 提示：求绝对值函数 ：double fabs(double x)。
 正弦函数：double sin(double x)。
 开根号函数：double sqrt(double x)。
 头文件：math.h
 y = |x| x < 0
 y = sin(2x) 0 ≤ x < 1
 y = √ (x^3 + x) 1 ≤ x < 5
 y = 2x + 10 else
 
 输入
 测试次数
 每组测试数据一行，为x的值
 输出
 对每个x，输出计算得到的y值
 样例输入
 2
 -10.0
 5.0
 样例输出
 10.00
 20.00
 */

#include <stdio.h>
#include <math.h>

int main() {
    int t;
    double x, ans = 0;
    
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%lf", &x);
        if ( x < 0 ) {
            ans = fabs(x);
        } else if ( x >= 0 && x < 1) {
            ans = sin(2.0 * x);
        } else if ( x >= 1 && x < 5 ) {
            ans = sqrt(pow(x, 3) + x);
        } else {
            ans = 2 * x + 10;
        }
        printf("%.2lf\n", ans);
    }
    
    return 0;
}
