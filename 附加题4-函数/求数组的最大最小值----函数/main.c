//
//  main.c
//  求数组的最大最小值----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编制函数，其功能是在float类型一维数组中查找最大值、最小值，并将它们返回到调用程序。
 
 * 输出保留两位小数
 
 输入
 n
 n个浮点数
 
 输出
 最大值 最小值
 
 样例输入
 10
 1.0
 2.0
 3.0
 4.0
 5.0
 6.0
 7.0
 8.0
 9.0
 10.0
 样例输出
 10.00 1.00
 */

#define N 100
#include <stdio.h>
#include <limits.h>

float *f(float a[], int length) {
    static float o[2];
    o[0] = INT_MIN;
    o[1] = INT_MAX;
    for (int i = 0; i < length; i++) {
        if (a[i] > o[0]) {
            o[0] = a[i];
        }
        if (a[i] < o[1]) {
            o[1] = a[i];
        }
    }
    return o;
}


int main() {
    int n;
    float input[N], *output;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f", input + i);
    }
    output = f(input, n);
    printf("%.2f %.2f\n", *output, *(output + 1));
    return 0;
}
