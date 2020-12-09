//
//  main.c
//  求数列中的偶数和
//
//  Created by Jacky on 2020/3/11.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编制程序，输入n个整数（n从键盘输入,n>0）,输出它们的偶数和。
 
 输入
 n
 
 n个整数
 
 输出
 其中偶数的和
 
 样例输入
 10
 1 2 3 4 5 6 7 8 9 10
 样例输出
 30
 */

#include <stdio.h>

int main() {
    int n, t, sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &t);
        if (t % 2 == 0) {
            sum += t;
        }
    }

    printf("%d\n", sum);

    return 0;
}