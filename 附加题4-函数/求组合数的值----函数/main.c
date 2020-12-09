//
//  main.c
//  求组合数的值----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编制程序，输入m,n(M>=n>=0)后,计算下列表达式的值并输出：
 
      m!
 -----------
  n! (m-n)!
 
 要求将计算阶乘运算的函数写为fact(n),函数返回值的类型为float
 
 输入
 m n
 
 输出
 对应表达式的值
 
 样例输入
 2 1
 样例输出
 2
 */

#define max(a, b) a > b ? a : b
#include <stdio.h>

float a[100];
int cache = 1;

float fact(int n) {
    a[0] = 1;
    for (int i = cache; i <= n; i++) {
        a[i] = a[i - 1] * i;
    }
    cache = max(cache, n);
    return a[n];
}

int main() {
    int m, n, ans;
    scanf("%d %d", &m, &n);

    ans = fact(m) / (fact(n) * fact(m - n));

    printf("%d\n", ans);
    return 0;
}