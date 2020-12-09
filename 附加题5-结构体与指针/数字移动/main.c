//
//  main.c
//  数字移动
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面m个数。写一函数并用指针实现以上功能，在主函数中输入n个整数，并输出调整后的n个数。
 
 输入
 输入的整数的个数和移动的位数
 
 输出
 移动后的输出
 
 样例输入
 8
 12 43 65 67 8 2 7 11
 4
 样例输出
 8 2 7 11 12 43 65 67
 */

#define N 1000
#include <stdio.h>

void moveValue(int *input, int n, int m) {
    for (int i = n - m; i < n; i++) {
        printf("%d ", *(input + i));
    }
    for (int i = m; i < n; i++) {
        printf("%d ", *(input + i - m));
    }
    printf("\n");
}

int main(int argc, const char *argv[]) {
    int n, m, input[N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", input + i);
    }
    scanf("%d", &m);
    moveValue(input, n, m);
    return 0;
}