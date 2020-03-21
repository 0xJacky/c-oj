//
//  main.c
//  替换字符串中的字串----函数
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 有一字符串，包含n个字符。写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。
 输入
 数字n 一行字符串 数字m
 输出
 从m开始的子串
 样例输入
 6
 abcdef
 3
 样例输出
 cdef
 */

#define N 500
#include <stdio.h>

char *f(char a[], int key, int length) {
    int i = 0;
    key--;
    static char b[N];
    while (key < length) {
        b[i++] = a[key++];
    }
    return b;
}

int main() {
    int n, m;
    char a[N], *p;
    scanf("%d", &n);
    scanf("%s", a);
    scanf("%d", &m);
    p = f(a, m, n);
    printf("%s\n", p);
    return 0;
}
