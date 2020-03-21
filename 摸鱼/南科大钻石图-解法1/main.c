//
//  main.c
//  南科大钻石图
//
//  Created by Jacky on 2020/3/17.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
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
    int n;
    scanf("%d", &n);
    // 头部
    for (int i = 1; i <= n / 2; i++) {
        printf(" ");
    }
    printf("*\n");
    // main
    for (int i = 1; i < (n - 1) / 2; i++) {
        // 空格
        for (int j = (n / 2) - i ; j > 0; j--) {
            printf(" ");
        }
        printf("/");
        // *
        for (int j = 1 ; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\\\n");
    }
    if (n >= 3) {
        printf("|");
        for (int i = 0; i < n - 2; i++) {
            printf("*");
        }
        printf("|\n");
    }
    for (int i = (n - 1) / 2; i > 1; i--) {
            // 空格
        for (int j = (n / 2) - i ; j >= 0; j--) {
            printf(" ");
        }
        printf("\\");
            // *
        for (int j = 1 ; j < (2 * i - 1) - 1; j++) {
            printf("*");
        }
        printf("/\n");
    }
    // 尾部
    for (int i = 1; i <= n / 2; i++) {
        printf(" ");
    }
    printf("*\n");
    return 0;
}
