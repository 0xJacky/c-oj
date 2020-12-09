//
//  main.c
//  递归实现斐波那契数列
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 斐波那契数列的定义如下：
 
 也就是说，斐波那契数列由0 和1开始，之后的每一项是之前的两数相加，例如:
 
 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233,...
 
 要求用递归函数实现，求斐波那契数列第n项的值。
 
 输入
 测试次数和每次要计算的项数
 
 输出
 计算的结果
 
 样例输入
 5
 1
 2
 5
 10
 20
 样例输出
 1
 1
 5
 55
 6765
 */

#include <stdio.h>

int f(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return f(n - 1) + f(n - 2);
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        printf("%d\n", f(n));
    }
    return 0;
}