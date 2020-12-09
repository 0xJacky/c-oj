//
//  main.c
//  有序数组中插入元素
//
//  Created by Jacky on 2020/3/15.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入n（n<=20)，输入n个有序整数（降序或升序）。插入元素e，使新序列仍按原来的排序规则为有序序列。
 输入
 输入测试次数t
 每行测试数据占两行，格式为：
 第一行，整数n，后跟n个有序整数
 第二行，插入整数e
 输出
 对每组测试数据，输出插入元素后的有序序列
 样例输入
 3
 5 10 20 30 40 50
 23
 15 90 80 70 60 50 45 40 35 30 25 20 15 10 5 -10
 100
 4 80 70 60 50
 55
 样例输出
 10 20 23 30 40 50
 100 90 80 70 60 50 45 40 35 30 25 20 15 10 5 -10
 80 70 60 55 50
 */

#include <stdio.h>

int main() {
    int t, n, input[20], sort = 1, e, output[20], k = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        sort = 1;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", input + j);
        }
        if (input[0] > input[n - 1]) {
            sort = 0;
        }
        scanf("%d", &e);

        // 递增
        if (sort) {
            k = 0;
            int a = 0;
            // 处理头部
            if (e < input[0]) {
                output[k] = e;
                a++;
            } else {
                for (a = 0; a < n; a++) {
                    if (e > input[a - 1] && e < input[a]) {
                        output[a++] = e;
                        break;
                    } else {
                        output[a] = input[a];
                    }
                }
            }

            for (int b = a; b <= n; b++) {
                output[b] = input[b - 1];
            }

            // 处理边界
            if (e > input[n - 1]) {
                output[n] = e;
            }
        } else {
            // 递减
            k = 0;
            // 处理头部
            int a = 0;
            if (e > input[0]) {
                output[k] = e;
                a++;
            } else {
                for (a = 0; a < n; a++) {
                    if (e < input[a - 1] && e > input[a]) {
                        output[a++] = e;
                        break;
                    } else {
                        output[a] = input[a];
                    }
                }
            }

            for (int b = a; b <= n; b++) {
                output[b] = input[b - 1];
            }

            // 处理边界
            if (e < input[n - 1]) {
                output[n] = e;
            }
        }

        for (int j = 0; j <= n; j++) {
            printf("%d ", output[j]);
        }
        printf("\n");
    }

    return 0;
}