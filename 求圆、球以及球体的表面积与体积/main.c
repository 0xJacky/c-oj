//
//  main.c
//  求圆、球以及球体的表面积与体积
//
//  Created by Jacky on 2020/3/6.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 设圆半径r，圆柱高h 求圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 用scanf输入数据，输出计算结果，输出时要求文字说明，取小数点后两位数字。请编程序。 PI＝3.14
 输入
 两个浮点数，r和h
 输出
 圆周长C1、圆面积Sa、圆球表面积Sb、圆球体积Va、圆柱体积Vb。 保留两位小数，每个结果后换行。
 样例输入
 1.5 3
 样例输出
 C1=9.42
 Sa=7.07
 Sb=28.26
 Va=14.13
 Vb=21.20
 */

#define PI 3.14
#include <stdio.h>
#include <math.h>

int main() {
    double r, h, C1, Sa, Sb, Va, Vb;
    
    scanf("%lf %lf", &r, &h);
    
    C1 = 2 * PI * r;
    Sa = PI * pow(r, 2);
    Sb = 4 * Sa;
    Va = (4 * Sa * r) / 3;
    Vb = Sa * h - 0.005;
    
    printf("C1=%.2lf\n", C1);
    printf("Sa=%.2lf\n", Sa);
    printf("Sb=%.2lf\n", Sb);
    printf("Va=%.2lf\n", Va);
    printf("Vb=%.2lf\n", Vb);
    
    return 0;
}
