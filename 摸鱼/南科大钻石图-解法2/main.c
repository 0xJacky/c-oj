    //
    //  main.c
    //  南科大钻石图-解法2
    //
    //  Created by Jacky on 2020/3/17.
    //  Copyright © 2020 Jacky. All rights reserved.
    //

/*
 优雅是优雅了一点，但代码行数也没减少几行。。。
 only one line with one odd integer n indicates the size of diamond, 1 <= n <= 999;
 
 input
 1
 output
 *
 input
 3
 output
 *
 |*|
 *
 */

#include <stdio.h>
#include <math.h>

int main() {
    int n, t, f;
    scanf("%d", &n);
    // 头部
    for (int i = 1; i <= n / 2; i++) {
        printf(" ");
    }
    printf("*\n");
    // main
    for (int i = 1; i < n - 1; i++) {
        // 空格
        t = (n / 2) - i;
        f = fabs((double)t);
        if (f) {
            for (int j = f ; j > 0; j--) {
                printf(" ");
            }
            if (t>0) {
                printf("/");
            } else {
                printf("\\");
            }
        } else {
            printf("|");
        }
        // *
        for (int j = 1 ; j <= n - 2*f - 2; j++) {
            printf("*");
        }
        if (f) {
            if (t>0) {
                printf("\\\n");
            } else {
                printf("/\n");
            }
        } else {
            printf("|\n");
        }
    }
    // 尾部
    if (n > 1) {
        for (int i = 1; i <= n / 2; i++) {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}
