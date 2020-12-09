//
//  main.c
//  落地反弹
//
//  Created by Jacky on 2020/3/12.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 一球从某一初始高度h（米）自由落下，每次落地后反跳回原高度的一半；再落下，求它在第n次落地时，共经过多少米？第n次反弹多高？
 
 (注：中间的每次计算结果都要四舍五入保留小数点后2位，
 
 例如：x是浮点类型，可以用x=(int)((x*1000+5)/10) / 100.0 来实现上述功能)
 
 输入
 球的初始高度h和落地次数n
 
 输出
 第n次落地时共经过的距离（米）和第n次反弹会有多高（米）
 
 样例输入
 100 10
 样例输出
 299.68
 0.10
*/

#include <stdio.h>

float around(float h) {
    return (int)((h * 1000 + 5) / 10) / 100.0;
}

int main() {
    float h, s = 0;
    int n;

    scanf("%f %d", &h, &n);

    for (int i = 0; i < n; i++) {
        s += h;
        h = around(h / 2);
        s += h;
    }

    // 第 n 次反弹后不需计算反弹高度
    s -= h;

    printf("%.2f\n%.2f\n", s, h);

    return 0;
}