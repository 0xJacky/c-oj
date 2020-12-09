//
//  main.c
//  统计数组负数的个数
//
//  Created by Jacky on 2020/3/15.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 定义一个大小为10的整型数组，从键盘任意输入10个数据存入数组，统计负数的个数。
 输入
 测试数据的组数n
 第一组测试数据
 第二组测试数据
 ........
 第n组测试数据
 输出
 第一组测试数据中负数的个数
 第二组测试数据中负数的个数
 .......
 第n组测试数据中负数的个数
 样例输入
 3
 -1 3 4 -10 -5 -90 7 8 0 -2
 5 6 -32 -9 12 23 -46 -65 -70 -100
 -2 -3 -4 -6 7 8 12 2 34 12
 样例输出
 5
 6
 4
 */

#include <stdio.h>

int main() {
    int n, input[10], ans = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        ans = 0;
        for (int j = 0; j < 10; j++) {
            scanf("%d", input + j);
            if (input[j] < 0) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}