//
//  main.c
//  统计字符串中各种字符的个数----函数
//
//  Created by Jacky on 2020/3/19.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 题目描述
 编写一函数，由实参传来一个字符串，统计此字符串中字母、数字、空格和其它字符的个数，在主函数中输入字符串以及输出上述结果。
 只要结果，别输出什么提示信息。
 输入
 一行字符串
 输出
 统计数据，4个数字，空格分开。
 样例输入
 !@#$%^QWERT    1234567
 样例输出
 5 7 4 6
 */

#define N 500
#include <ctype.h>
#include <stdio.h>
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
    printf("%d %d %d %d \n", a, b, c, d);
}

int main() {
    char input[N] = {'\0'};
    gets(input);
    f(input);
    return 0;
}