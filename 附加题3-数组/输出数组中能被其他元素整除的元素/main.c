//
//  main.c
//  输出数组中能被其他元素整除的元素
//
//  Created by Jacky on 2020/3/15.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入20个整数，输出其中能被数组中其它元素整除的那些数组元素。
 
 输入
 输出
 样例输入
 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
 样例输出
 4
 6
 8
 9
 10
 12
 14
 15
 16
 18
 20
 21
 */

#define N 20
#include <stdio.h>

int main() {
    int input[N], flag = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", input + i);
    }

    for (int i = 0; i < N; i++) {
        flag = 0;
        for (int j = 0; j < N; j++) {
            if (input[i] == input[j]) {
                continue;
            }
            if (input[i] % input[j] == 0) {
                flag = 1;
            }
        }

        if (flag) {
            printf("%d\n", input[i]);
        }
    }

    return 0;
}