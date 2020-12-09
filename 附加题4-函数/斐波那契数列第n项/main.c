//
//  main.c
//  斐波那契数列第n项
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 斐波那契数列的定义如下：
 F_0=0
 F_1=1
 F_n = F_{n-1}+ F_{n-2}
 也就是说，斐波那契数列由0 和1开始，之后的每一项是之前的两数相加，例如:
 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233,...
 要求用函数实现，求斐波那契数列第n项的值。（不能用递归）
 
 输入
 n
 
 输出
 斐波那契数列在第n项的值
 
 样例输入
 8
 样例输出
 21
 */

#define N 10000
#include <stdio.h>

int f[N];

int fib(int n) {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
}

int main() {
    int n, ans;
    scanf("%d", &n);
    ans = fib(n);
    printf("%d\n", ans);
    return 0;
}