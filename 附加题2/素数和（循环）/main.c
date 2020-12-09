//
//  main.c
//  素数和（循环）
//
//  Created by Jacky on 2020/3/13.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入数字范围n,m（n>=0, m>=0, n<=m)，输出[n,m]区间中的所有素数和。
 输入
 测试次数T
 每组测试数据一行，数字范围n m
 输出
 对每组测试数据，如果有素数，输出二行：
 第一行：输出[n,m]间的素数
 第二行：输出[n,m]间的素数和
 如果没有素数，输出NO
 
 样例输入
 3
 0 10
 10 30
 24 28
  
 样例输出
 2 3 5 7
 17
 11 13 17 19 23 29
 112
 NO
 */

#include <math.h>
#include <stdio.h>

void prime_number(int min, int max);

int main(int argc, const char* argv[]) {
    int t, min, max;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &min, &max);
        prime_number(min, max);
    }
    return 0;
}

void prime_number(int min, int max) {
    int flag = 1, sum = 0;
    if (min <= 1) {
        min = 2;
    }
    for (int i = min; i <= max; i++) {
        flag = 1;
        for (int j = 2; j <= sqrt((double)i); j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d ", i);
            sum += i;
        }
    }
    if (sum) {
        printf("\n");
        printf("%d", sum);
    } else {
        printf("NO");
    }
    printf("\n");
}