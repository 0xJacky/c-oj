//
//  main.c
//  求N以内的完数
//
//  Created by Jacky on 2020/3/13.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 一个数如果恰好等于它的因子之和，这个数就称为"完数"。 例如，6的因子为1、2、3，而6=1+2+3，因此6是"完数"。 编程序找出N之内的所有完数，并按下面格式输出其因子：
 输入
 N
 输出
 ? its factors are ? ? ?
 样例输入
 1000
 样例输出
 6 its factors are 1 2 3
 28 its factors are 1 2 4 7 14
 496 its factors are 1 2 4 8 16 31 62 124 248
 */

#include <stdio.h>

int main() {
    int n, sum, a, factor[10000] = {0};
    scanf("%d", &n);
    for (int i = 6; i <= n; i++) {
        // 后面的数因子肯定比前面多，不用清零数组
        sum = 0;
        a = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
                factor[a++] = j;
            }
        }
        if (i == sum) {
            printf("%d its factors are ", i);
            for (int k = 0; k < a; k++) {
                printf("%d ", factor[k]);
            }
            printf("\n");
        }
    }
    return 0;
}