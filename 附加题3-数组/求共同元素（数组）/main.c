//
//  main.c
//  求共同元素（数组）
//
//  Created by Jacky on 2020/5/22.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入三个数组，求三个数组中的共同元素。要求算法的时间复杂度尽可能小。
 
 提示：可使用C++排序函数sort。头文件：algorithm.h。
 
 输入
 测试次数t
 
 每组测试数据三行，分别为三个数组的数据，格式如下：
 
 数组大小n，后跟n个数据
 
 输出
 输出每组测试数据的共同元素个数和共同元素（升序顺序输出）。如果没有，仅输出0:。
 
 样例输入
2
4 43 1 6 89
3 12 4 43
8 34 1 2 6 43 56 90 8
5 1 2 3 4 8
8 10 2 43 546 2 43 8 20
4 50 40 2 8
 样例输出
 1:43
 2:2 8
 */

#define N 1000000
#define max(a, b) a > b ? a : b
#define min(a, b) a < b ? a : b
#include <stdio.h>
#include <limits.h>

int main() {
    int t, length, tmp, mx, mn, total;
    
    scanf("%d", &t);
    
    while (t--) {
        mx = INT_MIN;
        mn = INT_MAX;
        total = 0;
        int flag[N] = {0};
        for (int a = 1; a <= 3; a++) {
            scanf("%d", &length);
            for (int i = 0; i < length; i++) {
                scanf("%d", &tmp);
                mx = max(mx, tmp);
                mn = min(mn, tmp);
                if (flag[tmp] <= a) {
                    flag[tmp]++;
                }
                if (flag[tmp] == 3) {
                    total++;
                }
            }
        }
        
        printf("%d:", total);
        
        for (int i = mn; i <= mx; i++) {
            if (flag[i] >= 3) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
    
    return 0;
}
