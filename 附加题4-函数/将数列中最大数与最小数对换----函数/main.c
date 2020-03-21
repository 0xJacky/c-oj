//
//  main.c
//  将数列中最大数与最小数对换----函数
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。写三个函数； ①输入10个数；②进行处理；③输出10个数。
 输入
 10个整数
 输出
 整理后的十个数，每个数后跟一个空格（注意最后一个数后也有空格）
 样例输入
 2 1 3 4 5 6 7 8 10 9
 样例输出
 1 2 3 4 5 6 7 8 9 10
 */

#define N 10
#include <stdio.h>
#include <limits.h>

int input[N], min = INT_MAX, max = INT_MIN, min_i, max_i, t;

void handle() {
    t = input[0];
    input[0] = min;
    input[min_i] = t;
    
    if (max_i == 0) {
        max_i = min_i;
    }
    
    t = input[N-1];
    input[N-1] = max;
    input[max_i] = t;
}

void get() {
    for (int i = 0; i < N; i++) {
        scanf("%d", input + i);
        if (input[i] > max) {
            max = input[i];
            max_i = i;
        }
        if (input[i] < min) {
            min = input[i];
            min_i = i;
        }
    }
}

void output() {
    for (int i = 0; i < N; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");
}

int main() {
    get();
    handle();
    output();
    return 0;
}
