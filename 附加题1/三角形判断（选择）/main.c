//
//  main.c
//  三角形判断（选择）
//
//  Created by Jacky on 2020/3/7.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入三角形三条边的长度a、b、c，
 判断它们分别能构成什么形状的三角形：普通三角形、等边三角形、等腰三角形、等腰直角三角形。
 （提示：判断两个浮点数a、b相等，可以使用fabs(a-b)<0.001 ）
 
 输入
 三条边的长度
 
 输出
 三角形类型的名称；如果不能构成三角形，就输出“非三角形”
 
 样例输入
 2
 3
 4
 样例输出
 普通三角形
 提示
 1
 1
 1.414
 等腰直角三角形
 */

#define EPSILON 0.001
#include <stdio.h>
#include <math.h>
#include <float.h>

int isEqual(double a, double b);
int isTriangle(double a, double b, double c);
int isIsoscelesTriangle(double a, double b, double c);
int isRightTriangle(double a, double b, double c);
int isIsoscelesRightTriangle(double a, double b, double c);
int isEquilateralTriangle(double a, double b, double c);

int main() {
    double a, b, c;
    
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    
    if (isTriangle(a, b, c)) {
        if (isIsoscelesRightTriangle(a, b, c)) {
            printf("等腰直角三角形");
        } else if(isEquilateralTriangle(a, b, c)) {
            printf("等边三角形");
        } else if (isIsoscelesTriangle(a, b, c)) {
            printf("等腰三角形");
        } else if (isRightTriangle(a, b, c)) {
            printf("直角三角形");
        } else {
            printf("普通三角形");
        }
        printf("\n");
    } else {
        printf("非三角形\n");
    }
    
    return 0;
}

int isEqual(double a, double b) {
    if (fabs(a-b) < EPSILON) {
        return 1;
    }
    return 0;
}

int isTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

    // 等腰
int isIsoscelesTriangle(double a, double b, double c) {
    return isEqual(a, b) || isEqual(a, c) || isEqual(b, c);
}

    // 直角
int isRightTriangle(double a, double b, double c) {
    double sa = a*a;
    double sb = b*b;
    double sc = c*c;
    return isEqual(sa + sb, sc) || isEqual(sa + sc, sb) || isEqual(sb + sc, sa);
}

    // 等腰直角
int isIsoscelesRightTriangle(double a, double b, double c) {
    return isIsoscelesTriangle(a, b, c) && isRightTriangle(a, b, c);
    
}

    // 等边三角形
int isEquilateralTriangle(double a, double b, double c) {
    return isEqual(a, b) && isEqual(b, c);
}

