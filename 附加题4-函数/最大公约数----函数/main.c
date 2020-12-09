//
//  main.c
//  最大公约数----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数调用这两个函数，并输出结果两个整数由键盘输入。
 输入
 两个数
 输出
 最大公约数 最小公倍数
 样例输入
 6 15
 样例输出
 3 30
 */

#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
#include <stdio.h>

int gcd(int m, int n) {
    int a = max(m, n);
    int b = min(m, n);
    if (n == 0) {
        return m;
    }
    return gcd(b, a % b);
}

int main() {
    int m, n, g;
    scanf("%d %d", &m, &n);
    g = gcd(m, n);
    printf("%d %d\n", g, m * n / g);
    return 0;
}