//
//  main.c
//  数组奇偶排序（数组）
//
//  Created by Jacky on 2020/3/15.
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

#include <stdio.h>

int main() {
    int t, n, input[10000], o, e, tmp;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        o = 0;
        e = n;
        for (int j = 0; j < n; j++) {
            scanf("%d", input + j);
        }
        while(o < e) {
            int a, b;
            for(a = o; a < e; a++) {
                if(input[a] % 2) {
                    o = a;
                    break;
                }
            }
            
            for(b = e - 1; b > o - 1; b--) {
                if(input[b]%2 == 0) {
                    e = b;
                    break;
                }
            }
            
            if(a < b) {
                tmp = input[a];
                input[a] = input[b];
                input[b] = tmp;
                a++;
                b--;
            } else {
                break;
            }
        }
        printf("%d ", n);
        for (int j = 0; j < n; j++) {
            printf("%d ", input[j]);
        }
        printf("\n");
    }
    return 0;
}
