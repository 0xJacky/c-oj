//
//  main.c
//  数组奇偶排序（数组）
//
//  Created by Jacky on 2020/5/28.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入n，输入n个整数。调整数字位置使得偶数在序列的前半部分，奇数在序列的后半部分。
 
 注：自己根据样例输入、输出找到算法。
 
 要求算法的时间复杂度为O(n)。
 
 输入
 测试次数t
 
 每组测试数据格式如下：
 
 整数个数n，后跟n个整数
 
 输出
 对每组测试数据，输出整数个数和调整后的整数序列
 
 样例输入
3
4 1 2 3 4
8 12 32 67 13 1 9 4 97
6 1 32 9 43 12 0
 样例输出
 4 4 2 3 1
 8 12 32 4 13 1 9 67 97
 6 0 32 12 43 9 1
 */

#define N 1000
#include <stdio.h>
#include <math.h>

int main() {
    int t, n, a[N], tmp;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0 ; i < n; i++) {
            scanf("%d", a + i);
        }
        for (int i = 0, j = n - 1; j > i + 1 && i < n; i++) {
            if (a[i] % 2) {
                while (a[j] % 2 == 1) {
                    j--;
                }
                if (j < i + 1) break;
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        printf("%d ", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}
 


