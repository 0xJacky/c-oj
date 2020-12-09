//
//  main.c
//  字符串连接----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 写一函数，将两个字符串连接
 输入
 两行字符串
 输出
 链接后的字符串
 样例输入
 123
 abc
 样例输出
 123abc
 */

#define N 100
#include <stdio.h>

char *strmerge(char a[], char b[]) {
    int i = 0, j = 0;
    static char c[2 * N] = {'\0'};
    while (a[j] != '\0') {
        c[i++] = a[j];
        j++;
    }
    j = 0;
    while (b[j] != '\0') {
        c[i++] = b[j];
        j++;
    }
    return c;
}

int main() {
    char a[N], b[N], *p;
    scanf("%s", a);
    scanf("%s", b);
    p = strmerge(a, b);
    printf("%s\n", p);
    return 0;
}