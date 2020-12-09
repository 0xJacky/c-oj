//
//  main.c
//  四位数分解----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 写一函数，输入一个四位数字，要求输出这四个数字字符，但每两个数字间空格。如输入1990，应输出"1 9 9 0"。
 输入
 一个四位数
 输出
 增加空格输出
 样例输入
 1990
 样例输出
 1 9 9 0
 */

#include <stdio.h>

void split(int n) {
    int a, b, c, d;
    a = n / 1000;
    b = (n % 1000) / 100;
    c = (n % 100) / 10;
    d = n % 10;
    printf("%d %d %d %d \n", a, b, c, d);
}

int main() {
    int a;
    scanf("%d", &a);
    split(a);
    return 0;
}