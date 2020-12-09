//
//  main.c
//  图案
//
//  Created by Jacky on 2020/3/12.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 用循环语句打印一个n层图案，从上往下，每层的‘#’的数量分别是1,3,5,......,2*n-1
 例如n=3为
   #
  ###
 #####
 
 输入
 输入一个n，表示要打印图案的层数
 
 输出
 输出图案
 
 样例输入
 3
 样例输出
   #
  ###
 #####
 */

#include <stdio.h>

int main() {
    int n, l, m, o = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        l = 2 * i - 1;
        m = 2 * n - 1;
        o = 0;
        for (int j = 1; j <= m; j++) {
            if (j <= ((m - l) / 2) || (o >= l)) {
                printf(" ");
            } else {
                printf("#");
                o++;
            }
        }
        printf("\n");
    }

    return 0;
}