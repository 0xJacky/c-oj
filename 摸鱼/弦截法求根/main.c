//
//  main.c
//  弦截法求根
//
//  Created by Jacky on 2020/3/21.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 此问题考察函数的嵌套。用弦截法求方程求方程f(x)=x^3-5x^2+16x-80=0的根, 方法描述如下：
 (1) 取两个不同点x1,x2,如果f(x1)和f(x2)符号相反,则(x1,x2)区间内必有一个根。如果f(x1)与f(x2)同符号,则应重新输入x1,x2,直到f(x1)、f(x2)异号为止。（注意x1、x2的值不应差太大,以保证(x1,x2)区间内只有一个根）
 (2) 连接(x1,f(x1))和(x2,f(x2))两点,此线(即弦)交x轴于x。
 (3)若f(x)与f(x1)同符号,则根必在(x,x2)区间内,此时将x作为新的x1。如果f(x)与f(x2)同符号,则表示根在(x1,x)区间内,将x作为新的x2。
 (4) 重复步骤 (2) 和 (3) , 直到 ｜f(x)｜＜0.0001 为止. 此时认为 f(x)≈0.
 要求分别用以下几个函数来实现:
 (1)用函数f(x)代表x的函数:x3-5x2+16x-80.到 f 函数。
 (2)用函数调用 xpoint(x1,x2) 来求 (x1,f(x1)) 和 (x2,f(x2)) 的连线与x轴的交点x的坐标。
 判断点 (x1,f(x1)) 和 (x2,f(x2)) 的连线与x轴的交点 (xc, 0) 的计算方法如下：
 xc=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
 (3)用函数调用root (x1,x2) 来求 (x1,x2) 区间的那个实根。显然,执行root函数过程中要用到函数xpoint,而执行xpoint函数过程中要用 f 函数。
 输入
 x1 x2
 
 输出
 该区间的根
 
 样例输入
 6 10
 12 15
 2 6
 样例输出
 reinput:
 reinput:
 4.999999
 */

#define E 0.0001
#include <stdio.h>
#include <math.h>

double f(double x) {
    return x * x * x - 5 * x * x + 16 * x - 80;
}

double xpoint(double x1, double x2) {
    double y1 = f(x2), y2 = f(x1);
    return (x1 * y2 - x2 * y1) / (y2 - y1);
}

double root(double x1, double x2) {
    double x = xpoint(x1, x2);
    while (fabs(f(x)) > E) {
        if (f(x1) * f(x) >= 0) {
            x1 = x;
        } else if (f(x2) * f(x) >= 0) {
            x2 = x;
        }
        x = xpoint(x1, x2);
    }
    return x;
}

int main() {
    double x1, x2, ans;
    scanf("%lf %lf", &x1, &x2);
    
    while (f(x1) * f(x2) >= 0) {
        printf("reinput:");
        scanf("%lf %lf", &x1, &x2);
    }
    
    ans = root(x1, x2);
    //ans += 0.000001;
    printf("%lf\n", ans);

    return 0;
}
