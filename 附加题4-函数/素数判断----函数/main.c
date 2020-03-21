//
//  main.c
//  素数判断----函数
//
//  Created by Jacky on 2020/3/17.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的消息。
 输入
 一个数
 输出
 如果是素数输出prime 如果不是输出not prime
 样例输入
 97
 样例输出
 prime
 */

#include <stdio.h>
#include <math.h>

int isPrimeNumber(int n) {
    int flag = 1;
    if (n > 1) {
        for (int i = 2; i <= sqrt((double)n); i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    } else {
        flag = 0;
    }
    return flag;
}

int main() {
    int n;
    scanf("%d", &n);
    if (!isPrimeNumber(n)) {
        printf("not ");
    }
    printf("prime\n");
    return 0;
}
