//
//  main.c
//  求a+aa+aaa+…+aa..a之和
//
//  Created by Jacky on 2020/3/13.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编程计算a+aa+aaa+…+aa..a(n个a)的值，a的取值范围为0—9，n的取值范围为0—5。n和a的值都由键盘输入，均为整数。
 
 输入
 键盘输入a和n
 
 输出
 求和
 
 样例输入
 2
 4
 样例输出
 2468
 */

#include <math.h>
#include <stdio.h>

int main() {
    int a, n, ans = 0, t = 0;
    scanf("%d", &a);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        t = 0;
        for (int j = 0; j < i; j++) {
            t += a * pow(10, j);
        }
        ans += t;
    }
    printf("%d\n", ans);
    return 0;
}