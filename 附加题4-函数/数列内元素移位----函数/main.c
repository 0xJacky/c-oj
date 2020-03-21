//
//  main.c
//  数列内元素移位----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 有n个整数，使前面各数顺序向后移m个位置，最后m个数变成前面m个数。
 写一函数：实现以上功能，在主函数中输入n个数和输出调整后的n个数。
 
 输入
 输入数据的个数n n个整数移动的位置m
 
 输出
 移动后的n个数
 
 样例输入
 10
 1 2 3 4 5 6 7 8 9 10
 2
 样例输出
 9 10 1 2 3 4 5 6 7 8
 */

#define N 100
#include <stdio.h>

void moveValue(int input[], int n, int m) {
    for (int i = n - m; i < n; i++) {
        printf("%d ", input[i]);
    }
    for (int i = m; i < n; i++) {
        printf("%d ", input[i-m]);
    }
    printf("\n");
}

int main() {
    int n, m, input[N];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", input + i);
    }
    scanf("%d", &m);
    moveValue(input, n, m);
    return 0;
}
