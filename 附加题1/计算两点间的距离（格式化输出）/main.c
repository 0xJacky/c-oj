//
//  main.c
//  计算两点间的距离（格式化输出）
//
//  Created by Jacky on 2020/3/6.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入两点坐标（X1,Y1）,（X2,Y2）,计算并输出两点间的距离。
 
 输入
 输入由4个实数组成，分别表示x1,y1,x2,y2,数据之间用空格隔开。
 
 输出
 输出一行，结果保留两位小数。
 
 样例输入
 0 0 0 1
 样例输出
 1.00
 */

#include <math.h>
#include <stdio.h>

int main(int argc, const char* argv[]) {
    double x1, y1, x2, y2, d;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

    printf("%.2lf\n", d);

    return 0;
}