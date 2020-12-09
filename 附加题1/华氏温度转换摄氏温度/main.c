//
//  main.c
//  华氏温度转换摄氏温度
//
//  Created by Jacky on 2020/3/6.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9 输出要求有文字说明，取位2小数。
 输入
 一个华氏温度，浮点数
 输出
 摄氏温度，浮点两位小数
 样例输入
 -40
 样例输出
 c=-40.00
 提示
 零下40度，可以不问是？氏
 */

#include <stdio.h>

int main() {
    float f, c;

    scanf("%f", &f);

    c = 5.0 * (f - 32) / 9;

    printf("c=%.2f\n", c);

    return 0;
}