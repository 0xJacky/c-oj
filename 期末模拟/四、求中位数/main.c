//
//  main.c
//  四、求中位数
//
//  Created by Jacky on 2020/7/8.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 问题 D: 四、求中位数（10分）
 时间限制: 1 Sec  内存限制: 128 MB
 提交: 120  解决: 32
 [提交][状态][讨论版]
 题目描述
 什么是中位数？所谓中位数就是一组数据从小到大排列后中间的那个数字。但是有的时候一组数据的数目是偶数，那么中位数就是中间两个数值相加除以2。输入n（n<=10）个整数，求这n个整数的中位数。
 
 输入
 测试数据的组数t
 
 第一组数据的个数n n个数
 
 …….
 
 输出
 每组数据的中位数
 
 样例输入
2
7
1.1 2.2 3.3 4.4 5.5 6.6 7.7
8
8 7 6 5 4 3 2 1
 
 样例输出
 4.40
 4.50
 提示
 */

#define N 10
#include <stdio.h>

int main() {
    int t, n, tmp;
    float a[N];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%f", a + i);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j + 1] < a[j]) {
                    tmp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = tmp;
                }
            }
        }
        if (n % 2) {
            printf("%.2f\n", a[n / 2]);
        } else {
            printf("%.2f\n", (a[n / 2] + a[n / 2 - 1]) / 2);
        }
    }
    return 0;
}