//
//  main.c
//  输出字符串中的元音字母----函数
//
//  Created by Jacky on 2020/3/18.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 写一函数，将一个字符串中的元音字母复制到另一个字符串，然后输出。
 输入
 一行字符串
 输出
 顺序输出其中的元音字母（aeiuo）
 样例输入
 abcde
 样例输出
 ae
 */

#define N 100
#include <stdio.h>

char *vowel(char a[]) {
    int i = 0, j = 0;
    static char o[N] = {'\0'};
    while (a[i] != '\0') {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' ||
            a[i] == 'u') {
            o[j++] = a[i];
        }
        i++;
    }
    return o;
}

int main(int argc, const char *argv[]) {
    char input[N], *p;
    scanf("%s", input);
    p = vowel(input);
    printf("%s\n", p);
    return 0;
}