//
//  main.c
//  字符分类
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编写一个函数，由实参传来一个字符串，统计此字符串中字母，数字，空格和其他字符的个数，在主函数输入的字符串以及输出上述结果。
 
 输入
 输入任意字符串
 
 输出
 字母，数字，空格和其他字符的个数
 
 样例输入
 My address is #123 Shanghai Road, Beijing, 100045.
 样例输出
 letter:30,digit:9,space:7,others:4
 */

#define N 1000
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void f(char x[]) {
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < strlen(x); i++) {
        if (isalpha(x[i])) {
            a++;
        } else if (isalnum(x[i])) {
            b++;
        } else if (isspace(x[i])) {
            c++;
        } else {
            d++;
        }
    }
    printf("letter:%d,digit:%d,space:%d,others:%d\n", a, b, c, d);
}

int main() {
    char input[N];
    gets(input);
    f(input);
    return 0;
}
