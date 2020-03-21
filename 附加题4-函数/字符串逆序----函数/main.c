//
//  main.c
//  字符串逆序----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 写一函数，使输入的一个字符串按反序存放，在主函数中输入输出反序后的字符串。
 输入
 一行字符
 输出
 逆序后的字符串
 样例输入
 123456abcdef
 样例输出
 fedcba654321
 */

#define N 100
#include <stdio.h>
#include <string.h>

char *reverse(char a[]) {
    int i = 0, j = (int)strlen(a) - 1;
    static char b[N];
    while (j > -1) {
        b[i++] = a[j];
        j--;
    }
    return b;
}

int main() {
    char input[N], *p;
    scanf("%s", input);
    p = reverse(input);
    printf("%s\n", p);
    return 0;
}
