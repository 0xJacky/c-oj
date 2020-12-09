//
//  main.c
//  求两个数组中相同的元素
//
//  Created by Jacky on 2020/3/16.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 输入两个数组（数组元素个数6和8），输出在两个数组中都出现的元素（如a[6]={2,3,4,5,6,7},b[8]={3,5,7,9,11,13,15,19},则输出3、5、7）。
 样例输入
 2 3 4 5 6 7
 3 5 7 9 11 13 15 19
 样例输出
 3
 5
 7
 */
#define S 6
#define L 8
#include <stdio.h>

int main() {
    int a[S], b[L];
    for (int i = 0; i < S; i++) {
        scanf("%d", a + i);
    }
    for (int i = 0; i < L; i++) {
        scanf("%d", b + i);
    }
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < L; j++) {
            if (a[i] == b[j]) {
                printf("%d\n", a[i]);
            }
        }
    }
    return 0;
}