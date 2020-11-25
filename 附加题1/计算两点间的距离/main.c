//
//  main.c
//  计算两点间的距离
//
//  Created by Jacky on 2020/3/4.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
  题目描述
  输入两点坐标（x1,y1）,（x2,y2）,计算并输出两点间的距离。
  使用求平方根的sqrt函数来计算两点间的距离，定义为：
  double sqrt(double x);
  需要包含math.h头文件。
  输入
  依次输入4个double型（双精度浮点型）数据，分别表示x1,y1,x2,y2，数据之间用空格隔开。
  输出
  输出以"两点之间的距离为"开头的一句话，结尾包括两点间的距离，结果保留三位小数。
  样例输入
  1.5
  2.0
  3.7
  4.2
  样例输出
  两点之间的距离为3.111
 */

#include <stdio.h>
#include <math.h>

int main() {
    double a[4], d;
    
    for (int i = 0; i < 4; i++) {
        scanf("%lf", a+i);
    }
    
    d = pow(a[2] - a[0], 2) + pow(a[3] - a[1], 2);
    d = sqrt(d);
    
    printf("两点之间的距离%.3f\n", d);
    
    return 0;
}
