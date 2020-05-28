//
//  main.c
//  约瑟夫环
//
//  Created by Jacky on 2020/5/25.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 有n个人围成一个圈，从第一个人开始顺序报号1，2，3。凡是报到
 3退出圈子中的人原来的序号。要求打印出退出人的序号。以及找出最后留在圈子中的人原来的序号。
 
 输入
 输入n
 
 输出
 退出人的序号，并找出最后留在圈子里的人原来的序号
 
 样例输入
 13
 样例输出
 3 6 9 12 2 7 11 4 10 5 1 8
 13
 */

#define N 1000
#include <stdio.h>

int main() {
    int n, left, i = 0, s = 0, c[N] = {0};
    scanf("%d", &n);
    left = n;
    while (left != 1) {
        i++;
        if (i > n) i = 1;
        
        if (!c[i]) s++;
        
        if (s == 3) {
            s = 0;
            printf("%d ", i);
            c[i] = 1;
            left--;
        }
    }
    printf("\n");
    for (int j = 1; j <= n; j++) {
        if (c[j] == 0) printf("%d\n", j);
    }
    return 0;
}
